import math
import matplotlib.pyplot as plt

seisu = input("整数を入力してください :")
N = int(seisu)

X = []
Y = []

for i in range(0, 1440+1, 5):
    X.append(math.radians(i))
    Y1 = []
    for j in range(1, N+1):
      Y1.append(2 * (-1)**(j+1) * math.sin(j * math.radians(i))/j)
    Y.append(sum(Y1))
      
plt.plot(X, Y)
plt.show()