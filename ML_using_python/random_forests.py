from sklearn.datasets import load_digits
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import confusion_matrix
import seaborn as sns
digits=load_digits()
df=pd.DataFrame(digits.data)
df['target']=digits.target
X=df.drop(columns='target',axis=1)
y=df['target']
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)
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