import numpy as np

x = np.array([1,2,3,4])
y = np.array([3,5,7,8])

m = 3
c = 1
learning_rate = 0.01
y_pred_arr = []
dm = []
dc = []
iterations = 1000 
cost_arr = []
n = len(x)
for i in range(iterations):
    for j in range(n):
        y_pred = m * x[j] + c
        y_pred_arr.append(y_pred)

    for j in range(n):
        cost += 1/n * (y[j]-y_pred_arr[j])**2
    
    for j in range(n):
        dm += -2/n * x[j] * (y[j]-y_pred_arr[j])
        dc += -2/n * (y[j]-y_pred_arr[j])

    m = m - learning_rate * dm
    c = c - learning_rate * dc 
    cost_arr.append(cost)   

print(m,c)
print(cost_arr)
    
        
    