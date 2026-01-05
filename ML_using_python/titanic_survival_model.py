import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import cross_val_score
data=pd.read_csv(r"D:\Programs\ML_using_python\titanic.csv")
df=pd.DataFrame(data)
df.columns=df.columns.str.strip()
df=df.dropna(subset=["Age"])
df=df.drop(columns=["Embarked","Cabin","Ticket","Parch","Name","PassengerId","Pclass","SibSp"],axis=1)
le=LabelEncoder()
df["Sex"]=le.fit_transform(df["Sex"]) # male=1,female=0
X=df.drop("Survived",axis="columns")
y=pd.DataFrame(df["Survived"])
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)
#print(X_test[0:10])
model=DecisionTreeClassifier(max_depth=4,min_samples_split=10,random_state=42)
model.fit(X_train,y_train)
y_pred=model.predict(X_test)
print(y_pred)
print(model.score(X_test,y_test))
print(confusion_matrix(y_test,y_pred))
print(cross_val_score(model,X,y,cv=5))



