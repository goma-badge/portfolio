import math

R=1000
L=10*math.pow(10,-3)
C=0.01*math.pow(10,-6)

f=float(input("周波数f[kHz]を入力してください："))

fw=f*10**3

Xl = 2 * math.pi * fw * L
Xc = 1 / (2 * math.pi * fw * C)
z=math.sqrt(math.pow(R,2)+math.pow(Xl-Xc,2))


Zl = 2 * math.pi * fw * L
Zc = 1 / (2 * math.pi * fw * C)
fa= math.atan((Zl - Zc) / (R))

deg=math.degrees(fa)
print("インピーダンスは",'{:.1f}'.format(z),"位相は",'{:.1f}'.format(deg),"です")