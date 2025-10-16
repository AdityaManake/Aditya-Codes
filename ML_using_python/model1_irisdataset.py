import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.preprocessing import LabelEncoder

# Load and clean data
iris_df = pd.read_csv('D:/Programs/ML_using_python/iris_dataset.csv')
iris_df = iris_df.dropna()

# Encode target
le = LabelEncoder()
iris_df['species'] = le.fit_transform(iris_df['species'])

# Prepare features and target
X = iris_df.drop(columns='species')
y = iris_df['species']

# Train model
model = LogisticRegression(solver='liblinear', penalty='l2')
model.fit(X, y)

# Predict
prediction = model.predict([[5.1, 3.5, 1.4, 0.2]])
print("Predicted class:", prediction)
print("Decoded label:", le.inverse_transform(prediction))