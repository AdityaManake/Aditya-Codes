import numpy as np
from sklearn.linear_model import LinearRegression,RANSACRegressor
import matplotlib.pyplot as plt
from sklearn.metrics import r2_score,mean_squared_error,mean_absolute_error
x=np.array([[1971],[1981],[1991],[2001],[2011],[2021]]) #input
y=np.array([[548.2],[683.3],[846.4],[1028.7],[1210.2],[1414.2]]) #output
base_model=LinearRegression()
rhobust_model=RANSACRegressor(base_model)
rhobust_model.fit(x,y)
y_train_pred=rhobust_model.predict(x)
pred_years=np.array([[2015],[2025]])
y_pred=rhobust_model.predict(pred_years)
print(f"Population in millions:",y_pred)
print("R2 score:",r2_score(y,y_train_pred))
print("Mean absolute error:",mean_absolute_error(y,y_train_pred))
print("Mean squared error:",mean_squared_error(y,y_train_pred))
plt.scatter(x, y, color='blue', label='Training Data')
plt.plot(x, y_train_pred, color='red', label='Robust Fit')
plt.scatter(pred_years, y_pred, color='green', label='Predictions')
plt.xlabel("Year")
plt.ylabel("Price")
plt.title("Robust Regression: Population vs Year")
plt.legend()
plt.show()