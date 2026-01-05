import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
data=pd.read_csv(r"D:\Programs\ML_using_python\insurance_data.csv")
df=pd.DataFrame(data)
df.columns=df.columns.str.strip()
plt.scatter(df["age"],df["bought_insurance"],marker="+",color="red")
plt.xlabel("Age")
plt.ylabel("Bought Insurance")
plt.show()
X=df[["age"]]
y=df["bought_insurance"]
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.1)
print(X_test)
model=LogisticRegression()
model.fit(X_train,y_train)
predicted=model.predict(X_test)
print(predicted)    
print(model.score(X_test,y_test))