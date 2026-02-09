from sklearn.datasets import load_wine
import pandas as pd
from sklearn.naive_bayes import GaussianNB,MultinomialNB
from sklearn.model_selection import train_test_split
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import StandardScaler
data=load_wine()
df=pd.DataFrame(data.data,columns=data.feature_names)
df['target']=data.target
df['target_names']=df['target'].apply(lambda x:data.target_names[x])
X=df.drop(['target','target_names'],axis=1)
y=df.target
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2)
print(X_test[0:3],y_test[0:3])
#pipeline 1
gnb_pipeline=Pipeline([
    ('gnb',GaussianNB())
])
gnb_pipeline.fit(X_train,y_train)
print("gnb_pipeline score:",gnb_pipeline.score(X_test,y_test))
print("gnb_pipeline predict:",gnb_pipeline.predict(X_test[0:3]))

#pipeline 2
ss_gnb_pipeline=Pipeline([
    ('ss',StandardScaler()),
    ('gnb',GaussianNB())
])
ss_gnb_pipeline.fit(X_train,y_train)
print("ss_gnb_pipeline score:",ss_gnb_pipeline.score(X_test,y_test))
print("ss_gnb_pipeline predict:",ss_gnb_pipeline.predict(X_test[0:3]))

#pipeline 3
mnb_pipeline=Pipeline([
    ('mnb',MultinomialNB())
])
mnb_pipeline.fit(X_train,y_train)
print("mnb_pipeline score:",mnb_pipeline.score(X_test,y_test))
print("mnb_pipeline predict:",mnb_pipeline.predict(X_test[0:3]))

#pipeline 4 (MultinomialNB requires non-negative feature counts; StandardScaler introduces negatives.)
'''ss_mnb_pipeline=Pipeline([
    ('ss',StandardScaler()),
    ('mnb',MultinomialNB())
])
ss_mnb_pipeline.fit(X_train,y_train)
print("ss_mnb_pipeline score:",ss_mnb_pipeline.score(X_test,y_test))'''
