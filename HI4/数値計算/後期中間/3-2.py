import matplotlib.pyplot as plt
import math
import numpy as np


h=0.4
x=[]
y=[]
y2=[]
z=[]
x.append(0)
y.append(1)
z.append(1)
i=0
x_m=6

def f(x):
    return math.exp(x)

def f2(x):
    return (2*math.exp(-x/2)*(math.cos(math.sqrt(3)*x/2)+math.sqrt(3)*math.sin(math.sqrt(3)*x/2)))/3+math.exp(x)/3

while(1):
    x.append(x[i]+h)
    y.append(y[i]+h*z[i])
    z.append(x[i]+h*(-z[i]-y[i]+f(x[i])))
    if(x[i+1]>x_m):
        break
    i+=1

for i in x:
    y2.append(f2(i))
    
plt.plot(x,y,label="Euler")
plt.plot(x,y2,label="analysis")
plt.legend(loc=0)
plt.show()