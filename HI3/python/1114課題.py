import matplotlib.pyplot as plt
import math

f= list(range(1*10**3,200*10**3 +1))
L = 1 * 10 ** (-3)
C = 0.022 * 10 ** (-6)
R = 100

z = [0] * len(f)

for i in f:
    Xl = 2 * math.pi * i * L
    Xc = 1 / (2 * math.pi * i * C)
    z[i-1*10**3]=math.sqrt(R**2+(Xl+Xc)**2)

plt.xlabel("f[Hz]")
plt.ylabel("z[Ω]")
plt.xlim(1*10**3,200*10**3+1)
plt.plot(f,z)
plt.show()

fa = [0] * len(f)
for i in f:
    Xl = 2 * math.pi * i * L
    Xc = 1 / (2 * math.pi * i * C)
    fa[i - 1 * 10 ** 3] = math.atan((Xl - Xc) / (R))

plt.xlabel("f[Hz]")
plt.ylabel("Φ[deg]")
plt.xlim(1*10**3,200*10**3+1)
plt.plot(f,fa)
plt.show()
