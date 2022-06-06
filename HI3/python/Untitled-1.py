import random
import math
import matplotlib.pyplot as plt


N = int(input("乱数の組を入力"))
M = 0
raX = [0] * N
raY = [0] * N
X = [0] * N
y = [0] * N

for i in range(0, N):
    raX[i] = random.random()
    raY[i] = random.random()
    
    if ((raX[i]** 2 + raY[i]** 2) < 1):
        M += 1
        X[i] = raX[i]
        y[i] = raY[i]
        raX[i] = 0
        raY[i] = 0
    
pi = (4 * M / N)

plt.figure(figsize=(5, 5))
plt.xlim(0, 1)
plt.ylim(0, 1)
plt.scatter(raX, raY)
plt.scatter(X,y)
plt.show()
