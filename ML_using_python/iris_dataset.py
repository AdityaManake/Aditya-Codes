from sklearn.datasets import load_iris
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
iris=load_iris()
df=pd.DataFrame(data=iris.data, columns=iris.feature_names)
df['Species']=iris.target
df['Species']=df['Species'].map({0:'setosa',1:'versicolor',2:'virginica'})
sns.pairplot(df, hue='Species')
plt.suptitle('Pairwise scatter plot of Iris Dataset', y=1.02)
plt.show()
