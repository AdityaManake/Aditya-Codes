import matplotlib.pyplot as plt
import pandas as pd
Months =["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
Temperatures = [30, 32, 35, 33, 31, 29, 28, 27, 26, 25, 24, 23]
plt.plot(Months, Temperatures)
plt.title("Average Monthly Temperatures")
plt.xlabel("Months")
plt.ylabel("Temperature (°C)")
plt.show()
