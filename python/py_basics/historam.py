import matplotlib.pyplot as plt

rainfall = [20, 12, 8, 6]
plt.figure(figsize=(6,6))
plt.hist(rainfall, bins=4, color='skyblue', edgecolor='black')
plt.title("Rainfall Distribution")
plt.xlabel("Rainfall (mm)")
plt.ylabel("Frequency")
plt.grid(True, linestyle='--', alpha=0.5)
plt.show()