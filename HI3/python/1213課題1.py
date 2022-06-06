import math
import matplotlib.pyplot as plt

fX = list()

f1Y = list()

f2Y = list()

f3Y = list()

f4Y = list()

f5Y = list()


for i in range(0, 180*8+1,5 ):
    fX.append(math.radians(i))
    f1 = ((4 /(math.pi))* math.sin(1*(math.radians(i))))
    f1Y.append(f1)

    f2 = ((4 / (3 * math.pi)) * math.sin(3 * (math.radians(i))))
    
    f2Y.append(f2)

    f3 = ((4/ (5 * math.pi)) * math.sin(5 * (math.radians(i))))
    f3Y.append(f3)

    f4 = ((4 / (7 * math.pi)) * math.sin(7 * (math.radians(i))))
    f4Y.append(f4)

    f5Y.append(f1+f2+f3+f4)


plt.xlim(0, 25)
plt.ylim(-1.0, 1.0)
plt.plot(fX, f1Y)
plt.plot(fX, f2Y)
plt.plot(fX, f3Y)
plt.plot(fX, f4Y)
plt.show()


plt.plot(fX,f5Y)
plt.show()