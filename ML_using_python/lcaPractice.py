#Exp-1 Min-Max
'''
arr=[2,4,1,5,3]
print("Maximum value is:",max(arr))
print("Minimum value is:",min(arr))'''
# Exp-2 Array functions
'''arr=[2,4,1,5,3]
print("Orignal array is:",arr)
arr.append(6)
print("Array after append is:",arr)
arr.remove(1)
print("Array after remove is:",arr)
arr.pop(4)
print("Array after pop is:",arr)
length=len(arr)
print("Length of array is:",length)
print("Array after sorting is:",sorted(arr))'''
# Exp-3 Correlation and iris dataset
'''import pandas as pd
data={
    "Speed":[10,20,30,40,50],
    "Distance":[15,25,35,86045.23,55],
    "torque":[100,200,300,400,500]
}
df=pd.DataFrame(data)
print(df.corr())'''
import pandas as pd
from sklearn.datasets import load_iris
import matplotlib.pyplot as plt
iris=load_iris()
df=pd.DataFrame(data=iris.data,columns=iris.feature_names)
print(df)
df20=df.head(20)
plt.scatter(df['sepal length (cm)'],df['sepal width (cm)'])
plt.xlabel('sepal length (cm)')
plt.ylabel('sepal width (cm)')
plt.title('Iris Sepal Length vs Width')
plt.show()