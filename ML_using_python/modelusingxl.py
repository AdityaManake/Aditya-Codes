from sklearn.linear_model import LinearRegression
import pandas as pd
import numpy as np
from sklearn.metrics import r2_score,mean_squared_error,mean_absolute_error
df = pd.read_excel(r"D:\Programs\ML_using_python\Housing data.xlsx", sheet_name="Sheet1")
df.columns = df.columns.str.strip()#clean column names and inputs numeric values only to the model
x = df[['Year', 'SqFoot']]
y = df['Price']
model = LinearRegression()
model.fit(x,y)
y_test_pred=model.predict(x)
print(f"Model R² score: {r2_score(y, y_test_pred):.2f}")
print(f"Mean Absolute Error: {mean_absolute_error(y, y_test_pred):.2f} crores")
year = int(input("Enter year:"))
sqfoot = int(input("Enter sq.foot:"))
new_data = pd.DataFrame([[year, sqfoot]], columns=['Year', 'SqFoot'])
y_pred = model.predict(new_data)
print(f"Predicted price: ₹{y_pred[0]:.2f} crores")


