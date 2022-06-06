import math
import matplotlib.pyplot as plt

fX = list()

fY = list()

f1Y = list()
f2Y = list()
f3Y = list()
f4Y = list()
f5Y = list()
f6Y = list()
f7Y = list()

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

    f5 = ((4 / (9 * math.pi)) * math.sin(9 * (math.radians(i))))
    f5Y.append(f5)

    f6 = ((4 / (11 * math.pi)) * math.sin(11 * (math.radians(i))))
    f6Y.append(f6)

    f7 = ((4 / (13 * math.pi)) * math.sin(13 * (math.radians(i))))
    f7Y.append(f7)
    
    fY.append(f1+f2+f3+f4+f5+f6+f7)


plt.plot(fX, f1Y)
plt.plot(fX, f2Y)
plt.plot(fX, f3Y)
plt.plot(fX, f4Y)
plt.plot(fX, f5Y)
plt.plot(fX, f6Y)
plt.plot(fX, f7Y)
plt.show()

plt.plot(fX,fY)
plt.show()