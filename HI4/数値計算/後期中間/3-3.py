import matplotlib.pyplot as plt
import math
import numpy as np

n=10
h=(1-0)/n

x_1=0
y_1=0
x_2=0.25
y_2=1

M=[]

N=[
   [-(2+4*h**2),1,0,0,0,0,0,0,0],
   [1,-(2+4*h**2),1,0,0,0,0,0,0],
   [0,1,-(2+4*h**2),1,0,0,0,0,0],
   [0,0,1,-(2+4*h**2),1,0,0,0,0],
   [0,0,0,1,-(2+4*h**2),1,0,0,0],
   [0,0,0,0,1,-(2+4*h**2),1,0,0],
   [0,0,0,0,0,1,-(2+4*h**2),1,0],
   [0,0,0,0,0,0,1,-(2+4*h**2),1],
   [0,0,0,0,0,0,0,1,-(2+4*h**2)]
   ]

N_inv=np.linalg.inv(N)

for i in range(1,n):
    if(i==n-1):
        M+=[-x_2]
    else:
        M+=[0]

L=np.dot(N_inv,M).tolist()

L.insert(0,y_1)
L.append(x_2)

x=np.arange(0,1+h,h)
y=(np.e**(2*x)-np.e**(-2*x))/(4*(np.e**(2)-np.e**(-2)))

plt.plot(x,y,label="boundary")
plt.plot(x,L,label="Analytical solution",linestyle=":")
plt.legend(loc=0)
plt.show()