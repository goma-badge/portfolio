import matplotlib.pyplot as plt
import math

X1 = [math.radians(d) for d in range(0,180*8+1,5)]

Y1 = [(4/math.pi)*math.sin(d) for d in X1]
Y2 = [(4/(3*math.pi))*math.sin(3*d) for d in X1]
Y3 = [(4/(5*math.pi))*math.sin(5*d) for d in X1]
Y4 = [(4/(7*math.pi))*math.sin(7*d) for d in X1]

Y = []

for i in range(len(X1)):
    Y.append(Y1[i] + Y2[i] + Y3[i] + Y4[i])


plt.plot(X1,Y1)
plt.plot(X1,Y2)
plt.plot(X1,Y3)
plt.plot(X1,Y4)
plt.show()

plt.plot(X1,Y)
plt.show()
