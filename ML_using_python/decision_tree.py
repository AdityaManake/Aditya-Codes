import pandas as pd 
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.tree import DecisionTreeClassifier
data=pd.read_csv(r"D:\Programs\ML_using_python\salaries.csv")
df=pd.DataFrame(data)
df.columns=df.columns.str.strip()
X=df.drop("salary_more_then_100k",axis="columns")
y=pd.DataFrame(df["salary_more_then_100k"])
le_company=LabelEncoder()
le_job=LabelEncoder()
le_degree=LabelEncoder()
X["company_n"]=le_company.fit_transform(X["company"])
X["job_n"]=le_job.fit_transform(X["job"])
X["degree_n"]=le_degree.fit_transform(X["degree"])
X=X.drop("company",axis="columns")
X=X.drop("job",axis="columns")
X=X.drop("degree",axis="columns")
#company-ggl=2,abc=0,fb=1
#job-sales=2,computer=0,business=1
#degree-ms=1,bachelor=0
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.2,random_state=42)
print(X_test)
model=DecisionTreeClassifier()
model.fit(X_train,y_train)
print(model.score(X_test,y_test))
#sample=pd.DataFrame([[2,1,1]],columns=["company_n","job_n","degree_n"])
y_pred=model.predict(X_test)
print(y_pred)
mat=confusion_matrix(y_test,y_pred)
print(mat)