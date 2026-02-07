import pandas as pd
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from sklearn.preprocessing import MinMaxScaler
data=pd.read_csv(r"D:\Programs\ML_using_python\income.csv")
# plt.scatter(data["Age"],data["Income($)"])
# plt.show()
#dkm=KMeans(n_clusters=3)
#dy_predicted=km.fit_predict(data[['Age','Income($)']])
#data['cluster']=y_predicted
#print(data.head())
scalar=MinMaxScaler()
scalar.fit(data[['Income($)']])
data['Income($)']=scalar.transform(data[['Income($)']])
scalar.fit(data[['Age']])
data['Age']=scalar.transform(data[['Age']])
km=KMeans(n_clusters=3)
y_predicted=km.fit_predict(data[['Age','Income($)']])
print(y_predicted)
data['cluster']=y_predicted
print(data.head())  
df1=data[data.cluster==0]
df2=data[data.cluster==1]
df3=data[data.cluster==2]
plt.scatter(df1['Age'],df1['Income($)'],color='green')
plt.scatter(df2['Age'],df2['Income($)'],color='blue')
plt.scatter(df3['Age'],df3['Income($)'],color='red')
plt.xlabel("Age")
plt.ylabel("Income($)")
plt.scatter(km.cluster_centers_[:,0],km.cluster_centers_[:,1],color='black',marker='*',label='centroid')
plt.legend(["df1","df2","df3"])
plt.show()

#elbow technique (used to find the correct number of clusters)
k_rng=range(1,10)
sse=[]
for k in k_rng:
    km=KMeans(n_clusters=k)
    km.fit(data[["Age","Income($)"]])
    sse.append(km.inertia_) #inertia calculates the sum of squared distances of samples to their closest cluster center

print(sse)
plt.xlabel("K")
plt.ylabel("SSE")
plt.plot(k_rng,sse)
plt.show()