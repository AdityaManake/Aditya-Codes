import tensorflow as tf 
from tensorflow import keras 
import matplotlib.pyplot as plt
import numpy as np 
import seaborn as sns
(X_train,y_train),(X_test,y_test)=keras.datasets.mnist.load_data()
'''plt.matshow(X_train[0])
plt.show()'''
X_train=X_train/255
X_test=X_test/255
X_train_flattened= X_train.reshape(len(X_train),28*28) #converting 2d array to 1d array
X_test_flattened= X_test.reshape(len(X_test),28*28)
print(X_test_flattened.shape,X_train_flattened.shape)
model=keras.Sequential([
   keras.layers.Dense(10,input_shape=(784,),activation='sigmoid')
])
model.compile(optimizer='adam',loss='sparse_categorical_crossentropy',metrics=['accuracy'])
model.fit(X_train_flattened,y_train,epochs=5)
print(model.evaluate(X_test_flattened,y_test))
#plt.matshow(X_test[0])
#plt.show()
y_predicted=model.predict(X_test_flattened)
print(y_predicted[0])
print(np.argmax(y_predicted[0]))
cm=tf.math.confusion_matrix(y_test,y_predicted)
print(cm)
sns.heatmap(cm,annot=True)
plt.show()