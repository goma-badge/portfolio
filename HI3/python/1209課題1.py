import math
import matplotlib.pyplot as plt

X = list()
Y = list()
for i in range(0, 361, 5):
    X.append(math.radians(i))
    Y.append(2*math.sin(2*(math.radians(i))))

plt.xlim(0,7)
plt.ylim(-2.0,2.0)
plt.plot(X, Y)
plt.show()