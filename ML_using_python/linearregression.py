import matplotlib.pyplot as plt
import pandas as pd
from sklearn.linear_model import LinearRegression, RANSACRegressor #using Rhobust to surpass outliners
from sklearn.metrics import r2_score, mean_squared_error, mean_absolute_error
data={
    "Year": [2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019],
    "Price": [1000,1500,1200,8000,4500,6000,6500,7000]
}
df=pd.DataFrame(data)
x=df[["Year"]] #Feature(always input)
y=df[["Price"]] #Target(always output)
base_model=LinearRegression()
rhobust_model=RANSACRegressor(base_model)
rhobust_model.fit(x,y)
y_train_pred=rhobust_model.predict(x)
pred_years=pd.DataFrame({"Year":[2020,2025,2008]})
y_pred=rhobust_model.predict(pred_years)
print("R2 Score:",r2_score(y,y_train_pred))
print("Mean Squared Error:",mean_squared_error(y,y_train_pred))
print("Mean Absolute Error:",mean_absolute_error(y,y_train_pred))
print(y_pred)
plt.scatter(x, y, color='blue', label='Training Data')
plt.plot(x, y_train_pred, color='red', label='Robust Fit')
plt.scatter(pred_years, y_pred, color='green', label='Predictions')
plt.xlabel("Year")
plt.ylabel("Price")
plt.title("Robust Regression: Price vs Year")
plt.legend()
plt.show()
