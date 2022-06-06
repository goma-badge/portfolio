import matplotlib.pyplot as plt
import math

h=0.1
x=[]
y=[]
y2=[]
x.append(0)
y.append(1)
i=0
x_m=2.5

def f(x,y):
    return x*y
while(1):
    y.append(y[i]+h*f(x[i],y[i]))
    x.append(x[i]+h)
    if(x[i+1]>x_m):
        break
    i+=1

for i in x:
    y2.append(math.exp(i*i/2))
    
plt.plot(x,y,label="Euler")
plt.plot(x,y2,label="analysis")
plt.legend(loc=0)
plt.show()