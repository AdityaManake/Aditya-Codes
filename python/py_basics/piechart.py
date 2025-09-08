import matplotlib.pyplot as plt
import pandas as pd
fruites =["Apple","Banana","Mango","Grapes"]
quantities = [10, 20, 15, 25]
plt.figure(figsize=(6,6))
plt.pie(quantities,labels=fruites,autopct='%1.1f%%',startangle=90)
plt.title("Fruit Distribution")
plt.axis('equal')
plt.show()