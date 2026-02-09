import pandas as pd 
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import MultinomialNB
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.pipeline import Pipeline   
df=pd.read_csv(r"D:\Programs\ML_using_python\spam.csv")
df.groupby('Category').describe()
df['spam']=df['Category'].apply(lambda x:1 if x=='spam' else 0)
print(df.head())
X_train,X_test,y_train,y_test=train_test_split(df.Message,df.spam,test_size=0.25)
v=CountVectorizer()
X_train_count=v.fit_transform(X_train)
X_train_count.toarray()[:,3]
model=MultinomialNB()
model.fit(X_train_count,y_train)
X_test_count=v.transform(X_test)
emails=[
    "Hey mohan, are you coming tommorow?",
    "Free entry in 2 a wkly comp to win FA Cup final tickets"
]
X_emails_count=v.transform(emails)
print(model.predict(X_emails_count))
print(model.score(X_test_count,y_test))


clf=Pipeline([
    ('vectorizer',CountVectorizer()),
    ('nb',MultinomialNB())
])
clf.fit(X_train,y_train)
print(clf.predict(X_test))
print(clf.score(X_test,y_test))