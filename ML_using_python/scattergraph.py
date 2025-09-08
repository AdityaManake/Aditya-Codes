import matplotlib.pyplot as plt
city=["New York","Los Angeles","Chicago","Houston","Phoenix"]
population=[18,25,12,29,16]
plt.scatter(city,population)
plt.title("City Population")
plt.xlabel("Cities")
plt.ylabel("Population in millions")
plt.show()