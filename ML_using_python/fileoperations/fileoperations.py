import pandas as pd
df = pd.read_csv(r"ML_using_python\fileoperations\employees.csv", delimiter=',')
df.columns = df.columns.str.strip()
new_city_values = ['New York', 'Los Angeles', 'Chicago', 'Houston']
df['City'] = new_city_values
df['Calculated_salary'] = df['Salary'] + df['Bonus %']
if 'Senior Management' in df.columns:
    df = df.drop(columns=['Senior Management'])
print(df)
df.to_csv(r"ML_using_python\fileoperations\employees.csv", index=False)