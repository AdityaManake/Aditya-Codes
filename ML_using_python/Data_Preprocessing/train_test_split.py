import pandas as pd 
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
data=pd.read_csv(r"D:\Programs\ML_using_python\carprices.csv")
df=pd.DataFrame(data)
df.columns=df.columns.str.strip()
'''plt.scatter(df["Mileage"],df["Sell Price($)"],label="Mileage vs Sell Price")
plt.scatter(df["Age(yrs)"],df["Sell Price($)"],label="Age vs Sell Price")
plt.xlabel("Mileage / Age (yrs)")
plt.ylabel("Sell Price ($)")
plt.legend()
plt.show()'''
X=df[["Mileage","Age(yrs)"]]
y=df["Sell Price($)"]
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2)
model=LinearRegression()
model.fit(X_train,y_train)
predicted=model.predict(X_test)
print(predicted)
print(model.score(X_test,y_test))