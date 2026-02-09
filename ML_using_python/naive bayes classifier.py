import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB

df = pd.read_csv(r"D:\Programs\ML_using_python\titanic.csv")

df.drop(['PassengerId','Name','Ticket','Cabin',
         'Embarked','Parch','SibSp'], axis=1, inplace=True)

# Target
y = df.Survived

# Features
X = df.drop(['Survived'], axis=1)

# Encode Sex
dummies = pd.get_dummies(X.Sex, dtype=int)
inputs = pd.concat([X, dummies], axis=1)
inputs.drop(['Sex','male'], axis=1, inplace=True)

# Fill Age nulls
inputs.Age = inputs.Age.fillna(inputs.Age.mean())

print(inputs.head())

# Train test split
X_train, X_test, y_train, y_test = train_test_split(
    inputs, y, test_size=0.2
)

# Model
model = GaussianNB()
model.fit(X_train, y_train)

print(model.score(X_test, y_test))
