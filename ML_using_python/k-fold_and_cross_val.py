from sklearn.svm import SVC
from sklearn.ensemble import RandomForestClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.datasets import load_digits
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.model_selection import KFold
from sklearn.model_selection import StratifiedKFold
from sklearn.model_selection import cross_val_score
data=load_digits()
X=data.data
y=data.target
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.3,random_state=3)
'''lr=LogisticRegression(max_iter=1000)
lr.fit(X_train,y_train)
print("Logistic regression score:",lr.score(X_test,y_test))

svm=SVC()
svm.fit(X_train,y_train)
print("SVM score:",svm.score(X_test,y_test))

rf=RandomForestClassifier()
rf.fit(X_train,y_train)
print("Random Forest score:",rf.score(X_test,y_test))'''

kf=KFold(n_splits=3)
for train_index, test_index in kf.split([1,2,3,4,5,6,7,8,9,10]):
    print("Train:",train_index,"Test:",test_index)

def get_score(model,X_train,X_test,y_train,y_test):
    model.fit(X_train,y_train)
    return model.score(X_test,y_test)

folds=StratifiedKFold(n_splits=3)
scores_l=[]
scores_svm=[]
scores_rf=[]

for train_index , test_index in folds.split(data.data,data.target):
    X_train,X_test,y_train,y_test=data.data[train_index],data.data[test_index],data.target[train_index],data.target[test_index]

    scores_l.append(get_score(LogisticRegression(max_iter=1000),X_train,X_test,y_train,y_test))
    scores_svm.append(get_score(SVC(),X_train,X_test,y_train,y_test))
    scores_rf.append(get_score(RandomForestClassifier(n_estimators=400),X_train,X_test,y_train,y_test))

print("Logistic regression scores:",scores_l)
print("SVM scores:",scores_svm)
print("Random Forest scores:",scores_rf)
print("Logistic regression average score:",np.average(scores_l))
print("SVM average score:",np.average(scores_svm))
print("Random Forest average score:",np.average(scores_rf))

print(cross_val_score(LogisticRegression(max_iter=1000),data.data,data.target))
print(cross_val_score(SVC(gamma='auto'),data.data,data.target))
print(cross_val_score(RandomForestClassifier(n_estimators=200),data.data,data.target))
