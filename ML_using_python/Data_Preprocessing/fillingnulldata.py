import pandas as pd

# 1. Read the fresh CSV file with missing data
df=pd.read_csv(r"ML_using_python\fileoperations\employees2.csv",delimiter=',')
df.columns=df.columns.str.strip()

# 2. CALCULATE MISSING INDEXES HERE, BEFORE ANY FILLING
missing_indexes = df[df['Bonus %'].isna()].index

# Check how many missing values you actually have
print(f"Number of missing Bonus % values: {len(missing_indexes)}")
print(f"Indices of missing Bonus % values: {missing_indexes}")

# (Your original code continues below)
print(f"Missing values before any fill:\n{df.isnull().sum()}")

df['Salary'] = df['Salary'].fillna(df['Salary'].mean())
print(f"\nAfter filling missing values in salary:\n{df}")


# 3. THIS LINE WILL NOW ONLY WORK IF len(missing_indexes) is 2
# If it's 0, you must fix the CSV or where you're reading from.
if len(missing_indexes) == 2:
    replaced_values=pd.Series([5.0,7.2],index=missing_indexes)
    df['Bonus %']=df['Bonus %'].fillna(replaced_values)
    print(f"\nAfter filling missing values in bonus percentage:\n{df}")
else:
    print("\nSkipping Bonus % fill: The number of missing values is not 2.")

df.to_csv(r"ML_using_python\fileoperations\employees2.csv",index=False)