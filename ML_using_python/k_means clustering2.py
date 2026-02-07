from sklearn.datasets import load_iris
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.preprocessing import MinMaxScaler
iris=load_iris()
df=pd.DataFrame(iris.data,columns=iris.feature_names)
df['target']=iris.target
cols=['sepal length (cm)','sepal width (cm)']
df.drop(columns=cols,axis=1,inplace=True)
df['flower_name']=df['target'].apply(lambda x:iris.target_names[x])
#print(df.head())
scalar=MinMaxScaler()
scalar.fit(df[["petal length (cm)","petal width (cm)"]])
df[["petal length (cm)","petal width (cm)"]]=scalar.transform(df[["petal length (cm)","petal width (cm)"]])
print(df.head())
'''k_rng=range(1,10)
sse=[]
for k in k_rng:
    km=KMeans(n_clusters=k)
    km.fit(df[["petal length (cm)","petal width (cm)"]])
    sse.append(km.inertia_)
print(sse)
plt.xlabel("K")
plt.ylabel("SSE")
plt.plot(k_rng,sse)
plt.show()'''
# found the number of clusters to be 3
km=KMeans(n_clusters=3)
y_predicted=km.fit_predict(df[['petal length (cm)','petal width (cm)']])
df['cluster']=y_predicted
print(df.head())
df1,df2,df3=df[df.cluster==0],df[df.cluster==1],df[df.cluster==2]
plt.scatter(df1['petal length (cm)'],df1['petal width (cm)'],color='green')
plt.scatter(df2['petal length (cm)'],df2['petal width (cm)'],color='blue')
plt.scatter(df3['petal length (cm)'],df3['petal width (cm)'],color='red')
plt.scatter(km.cluster_centers_[:,0],km.cluster_centers_[:,1],color='black',marker='*')
plt.xlabel("petal length (cm)")
plt.ylabel("petal width (cm)")
plt.legend(["df1","df2","df3","centroid"])
plt.show()