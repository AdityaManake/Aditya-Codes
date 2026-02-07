from sklearn.linear_model import LogisticRegression
from sklearn.ensemble import RandomForestClassifier
from sklearn.svm import SVC
from sklearn.datasets import load_iris
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.model_selection import cross_val_score
iris=load_iris()
X=iris.data
y=iris.target
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=3)
print(np.average(cross_val_score(LogisticRegression(max_iter=1000),X_train,y_train)))
print(np.average(cross_val_score(SVC(gamma='auto'),X,y)))
print(np.average(cross_val_score(RandomForestClassifier(n_estimators=200),X_train,y_train))) 