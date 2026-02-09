from sklearn.model_selection import GridSearchCV
from sklearn.svm import SVC
from sklearn.datasets import load_iris
import pandas as pd
iris=load_iris()
clf=GridSearchCV(SVC(gamma='auto'),{
    'C':[1,10,20],
    'kernel':['linear','rbf']
},cv=5,return_train_score=False)
clf.fit(iris.data,iris.target)
df=pd.DataFrame(clf.cv_results_)
print(df[['param_C','param_kernel','mean_test_score']])
print("Best score:",clf.best_score_)
print("Best parameters:",clf.best_params_)  