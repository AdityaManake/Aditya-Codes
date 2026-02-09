from sklearn.datasets import load_digits
import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.ensemble import RandomForestClassifier
from sklearn.svm import SVC
from sklearn.naive_bayes import GaussianNB, MultinomialNB
from sklearn.model_selection import GridSearchCV
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler

digits = load_digits()

model_params = {

    'LogisticRegression': {
        'model': Pipeline([
            ('scaler', StandardScaler()),
            ('lr', LogisticRegression(
                solver='liblinear',
                multi_class='auto',
                max_iter=1000
            ))
        ]),
        'params': {
            'lr__C': [1, 5, 10]   
        }
    },

    'SVM': {
        'model': Pipeline([
            ('scaler', StandardScaler()),   
            ('svm', SVC(gamma='auto'))
        ]),
        'params': {
            'svm__C': [1, 10, 20],         
            'svm__kernel': ['rbf', 'linear']
        }
    },

    'RandomForest': {
        'model': RandomForestClassifier(),
        'params': {
            'n_estimators': [1, 5, 10],
            'max_depth': [3, 5, 10]
        }
    },

    'GNB': {
        'model': GaussianNB(),
        'params': {
            'var_smoothing': [1e-9, 1e-8, 1e-7, 1e-6]
        }
    },

    'MNB': {
        'model': MultinomialNB(),
        'params': {
            'alpha': [0.1, 0.5, 1.0, 2.0],
            'fit_prior': [True, False]
        }
    }
}

scores = []

for model_name, mp in model_params.items():

    clf = GridSearchCV(
        mp['model'],
        mp['params'],
        cv=5,
        return_train_score=False
    )

    clf.fit(digits.data, digits.target)

    scores.append({
        'model': model_name,
        'best_param': clf.best_params_,
        'best_score': clf.best_score_
    })

scores_df = pd.DataFrame(
    scores,
    columns=['model', 'best_param', 'best_score']
)

print(scores_df)
