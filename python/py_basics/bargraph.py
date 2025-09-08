import matplotlib.pyplot as plt
import pandas as pd
city=["Delhi", "Mumbai", "Bangalore", "Pune"]
population=[20, 12, 8, 6]
plt.bar(city,population,color=['red', 'orange','yellow','green'],width=0.5)
plt.title("Population of cities")
plt.xlabel("Cities")
plt.ylabel("Population in millions")
plt.show()