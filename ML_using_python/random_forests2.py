import pandas as pd
from sklearn.datasets import load_iris
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import confusion_matrix
data=load_iris()
#print(list(data.keys()))
df=pd.DataFrame(data.data,columns=data.feature_names)
df['target']=data.target
'''print(df.head())
df1=df[df.target==0]
df2=df[df.target==1]
plt.scatter(df1['sepal length (cm)'],df1['sepal width (cm)'],color='green')
plt.scatter(df2['sepal length (cm)'],df2['sepal width (cm)'],color='red')
plt.xlabel("sepal length (cm)")
plt.ylabel("sepal width (cm)")  
plt.show()  
plt.scatter(df1['petal length (cm)'],df1['petal width (cm)'],color='green')
plt.scatter(df2['petal length (cm)'],df2['petal width (cm)'],color='red')
plt.xlabel("petal length (cm)")
plt.ylabel("petal width (cm)")  
plt.show()  '''
X=df.drop(columns='target',axis=1)
y=df['target']
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=3)
print(X_train.shape)
print(X_test.shape)
model=RandomForestClassifier(n_estimators=20)
model.fit(X_train,y_train)
print(model.score(X_test,y_test))
plt.figure(figsize=(10,7))
sns.heatmap(confusion_matrix(y_test,model.predict(X_test)),annot=True)
plt.xlabel("Predicted")
plt.ylabel("Truth")
plt.show()