from sklearn.model_selection import RandomizedSearchCV
from sklearn.datasets import load_iris
from sklearn.svm import SVC
import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.ensemble import RandomForestClassifier

#For single model
'''iris=load_iris()
rs=RandomizedSearchCV(SVC(gamma='auto'),{
    'C':[1,10,20],
    'kernel':['linear','rbf']
},cv=5,return_train_score=False,n_iter=2)
rs.fit(iris.data,iris.target)
df=pd.DataFrame(rs.cv_results_)
print(df[['param_C','param_kernel','mean_test_score']]) '''

#for multiple models
iris=load_iris()
model_params={
    'svm':{
        'model':SVC(gamma='auto'),
        'params': {
            'C':[1,10,20],
            'kernel':['linear','rbf']
        }
    },
    'random_forest':{
        'model':RandomForestClassifier(),
        'params':{
            'n_estimators':[1,5,10]
        }
    },
    'logistic_regression':{
        'model':LogisticRegression(solver='liblinear',multi_class='auto'),
        'params':{
            'C':[1,5,10]
        }
    }

}
scores=[]
for model_name,mp in model_params.items():
    clf=RandomizedSearchCV(mp['model'],mp['params'],cv=5,return_train_score=False,n_iter=2)
    clf.fit(iris.data,iris.target)
    scores.append({
        'model':model_name,
        'best_scores':clf.best_score_,
        'best_params':clf.best_params_
    })
scores_df=pd.DataFrame(scores,columns=['model','best_scores','best_params'])
print(scores_df)