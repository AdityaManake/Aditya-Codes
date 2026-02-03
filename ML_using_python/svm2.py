from sklearn.datasets import load_digits
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.svm import SVC
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
digits=load_digits()
df=pd.DataFrame(digits.data)
df['target']=digits.target
X=df.drop('target',axis='columns')
y=df.target
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2)
model=SVC(C=1)
model.fit(X_train,y_train)
print(model.score(X_test,y_test))
print(X_test[5])
sample=X_test.iloc[5]
print(model.predict([sample]))
print(f"Actual:{y_test.iloc[5]}")
print(confusion_matrix(y_test,model.predict(X_test)))

