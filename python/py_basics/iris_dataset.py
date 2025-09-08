from sklearn.datasets import load_iris
import pandas as pd
iris=load_iris()
iris_df=pd.DataFrame(data=iris.data)
columns=iris.feature_names
print(iris_df)