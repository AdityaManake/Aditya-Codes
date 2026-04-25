from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
from bs4 import BeautifulSoup
import json, time, pandas as pd
import random

# ── Setup ─────────────────────────────────────────────────────
options = webdriver.ChromeOptions()
options.add_argument("--start-maximized")
options.add_argument("--disable-blink-features=AutomationControlled")
options.add_experimental_option("excludeSwitches", ["enable-automation"])

driver = webdriver.Chrome(
    service=Service(ChromeDriverManager().install()),
    options=options
)

BASE_URL = "https://www.justdial.com/Ahmedabad/Gyms/nct-11575244?trkid=785-ahmedabad-fcat-catsle&term=gyms&cbflg="

driver.get(BASE_URL)
time.sleep(8)

# ── Slow Human-like Scrolling ─────────────────────────────────
print("\n🌀 Scrolling slowly to load gyms...\n")

last_height = driver.execute_script("return document.body.scrollHeight")

for i in range(80):  # increase if needed
    
    # Smooth scroll (~10 lines total)
    total_scroll = 0
    target_scroll = random.randint(200, 300)

    while total_scroll < target_scroll:
        step = random.randint(20, 40)
        driver.execute_script(f"window.scrollBy(0, {step});")
        total_scroll += step
        time.sleep(random.uniform(0.05, 0.15))
    
    # Wait for lazy loading
    time.sleep(random.uniform(1.5, 2.5))
    
    new_height = driver.execute_script("return document.body.scrollHeight")
    print(f"Scroll {i+1} | Height: {new_height}")
    
    # Stop when no more new content loads
    if new_height == last_height:
        print("\n✅ No more new content loading. Stopping scroll.")
        break
        
    last_height = new_height

# ── Scraping from __NEXT_DATA__ ───────────────────────────────
print("\n📦 Extracting data...\n")

soup = BeautifulSoup(driver.page_source, "html.parser")
driver.quit()

all_gyms = []
seen = set()

script_tag = soup.find("script", id="__NEXT_DATA__")

if not script_tag:
    print("❌ Could not find __NEXT_DATA__")
    exit()

try:
    data = json.loads(script_tag.string)
    
    results = data["props"]["pageProps"]["listData"]["results"]
    columns = results["columns"]
    rows    = results["data"]

    col = {name: idx for idx, name in enumerate(columns)}
    
    print(f"Found {len(rows)} listings\n")

    for row in rows:
        try:
            name    = str(row[col["name"]]).strip()
            address = str(row[col["NewAddress"]]).strip()
            area    = str(row[col["area"]]).strip()
            phone   = str(row[col["VNumber"]]).strip()
            city    = str(row[col["city"]]).strip()

            if name in seen or not name or name == "nan":
                continue

            seen.add(name)

            all_gyms.append({
                "GYM Name":     name,
                "Address":      address,
                "Area":         area,
                "City":         city.capitalize(),
                "State":        "Gujarat",
                "Phone Number": phone,
            })

        except Exception:
            continue

except Exception as e:
    print(f"❌ Error extracting data: {e}")
    exit()

# ── Save Data ─────────────────────────────────────────────────
df = pd.DataFrame(all_gyms)
df.drop_duplicates(subset=["GYM Name"], inplace=True)
df = df[df["GYM Name"].str.strip() != ""]
df.reset_index(drop=True, inplace=True)

print(f"\n{'='*50}")
print(f"✅ Total clean entries: {len(df)}")
print(df.head(10).to_string())

df.to_csv("ahmedabad_gyms_justdial.csv", index=False)
print("\n✅ Saved → ahmedabad_gyms_justdial.csv")