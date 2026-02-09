from sklearn.datasets import load_digits
from sklearn.linear_model import LogisticRegression
from sklearn.svm import SVC
from sklearn.ensemble import RandomForestClassifier
from sklearn.naive_bayes import GaussianNB
from sklearn.naive_bayes import MultinomialNB
from sklearn.preprocessing import StandardScaler
from sklearn.pipeline import Pipeline
from sklearn.model_selection import RandomizedSearchCV
import pandas as pd

digits=load_digits()

model_params={


    'Logistic_Regression':{
        'model':Pipeline([
        ('scaler',StandardScaler()),
        ('lr',LogisticRegression(max_iter=1000))
    ]),
        'params':{
           'lr__C':[1,10,20]
        }
    },


    'SVM':{
        'model':Pipeline([
            ('scaler',StandardScaler()),
            ('svm',SVC(gamma='auto'))
        ]),
        'params':
        {
            'svm__C':[1,10,20],
            'svm__kernel':['linear','rbf']
        }
    },


    'Random_Forest':{
        'model':RandomForestClassifier(),
        'params':{
            'n_estimators':[5,10,20],
            'max_depth':[3,5,10]
        }
    },
    

    'GNB':{
        'model':GaussianNB(),
        'params':{
            'var_smoothing': [1e-9, 1e-8, 1e-7, 1e-6]
        }
    },


    'MNB':{
        'model':MultinomialNB(),
        'params':{
            'alpha':[0.1,0.5,1.0,2.0],
            'fit_prior':[True,False]
        }
    }
}

scores=[]


for model_name,mp in model_params.items():
    clf=RandomizedSearchCV(mp['model'],mp['params'],cv=5,return_train_score=False)
    clf.fit(digits.data,digits.target)

    scores.append({
        'model':model_name,
        'best_score':clf.best_score_,
        'best_param':clf.best_params_
    })

scores_df=pd.DataFrame(scores,columns=['model','best_score','best_param'])
print(scores_df)