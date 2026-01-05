from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
import pandas as pd
from sklearn.metrics import confusion_matrix
data=load_iris()
X=pd.DataFrame(data.data,columns=data.feature_names)
y=data.target
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)
model=LogisticRegression()
model.fit(X_train,y_train)
print("Accuracy:",model.score(X_test,y_test))   
sample=pd.DataFrame([[5.9,3.0,5.1,1.8]],columns=data.feature_names)
prediction=model.predict(sample)
print("Predicted class:", prediction[0])
print("Flower name:", data.target_names[prediction[0]])
