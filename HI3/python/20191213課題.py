import math
import matplotlib.pyplot as plt

sei = input("整数を入力:")
S = int(sei)

x = []
y = []

for i in range(0, 1440 + 1, 5):
    x.append(math.radians(i))
    y1 = []
    for j in range(1, S + 1):
        y1.append(2 * (-1)**(j+1) * math.sin(j * math.radians(i))/j)
    y.append(sum(y1))

plt.plot(x, y)
plt.show()
