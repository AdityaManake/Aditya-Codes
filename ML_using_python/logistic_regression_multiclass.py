import matplotlib.pyplot as plt
from sklearn.datasets import load_digits
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import confusion_matrix
import seaborn as sns
digits=load_digits()
X_train,X_test,y_train,y_test=train_test_split(digits.data,digits.target,test_size=0.2)
model=LogisticRegression(max_iter=1000)
model.fit(X_train,y_train)
print(model.score(X_test,y_test))
'''plt.gray()
plt.matshow(digits.images[67])
plt.show()'''
y_pred=model.predict(X_test)
print(confusion_matrix(y_test,y_pred))
plt.figure(figsize=(10,7))
sns.heatmap(confusion_matrix(y_test,y_pred),annot=True)
plt.xlabel("Predicted")
plt.ylabel("Truth")
plt.show()

