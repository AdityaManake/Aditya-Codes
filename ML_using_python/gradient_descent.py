import numpy as np 
import math
def gradient_descent(x,y):
    m_curr=b_curr=0
    iterations=10000
    n=len(x)
    learning_rate=0.000001
    for i in range(iterations):
        y_pred=m_curr*x+b_curr
        cost=(1/n)*sum(val**2 for val in (y-y_pred))
        md=-(2/n)*sum(x*(y-y_pred))
        bd=-(2/n)*sum(y-y_pred)
        m_curr=m_curr-learning_rate*md
        b_curr=b_curr-learning_rate*bd
        if math.isclose(m_curr,b_curr,rel_tol=1e-9,abs_tol=0.0):
            break
        print("m:{},  b:{},  cost:{},  iteration:{}".format(m_curr,b_curr,cost,i))
x=np.array([92,56,88,70,80,49,65,35,66,67])
y=np.array([98,68,81,80,83,52,66,30,68,73])
gradient_descent(x,y)