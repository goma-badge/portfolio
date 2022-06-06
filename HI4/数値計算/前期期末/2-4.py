import math
import matplotlib.pyplot as plt
x =[5]
e= 10**-6
k = 0
E = 1
R = 100000
C = 0.00008
I = E/R

def f(x):
    X = I*pow(math.e,-x/(C*R))-I/2
    return X

def df(y):
    h = 1e-5
    Y = (f(y+h)-f(y))/h
    return Y

while(True):
    k += 1
    x.append(x[k-1]-(f(x[k-1])/df(x[k-1])))
    plt.plot(x)
    print(x[k])
    if (math.fabs((x[k]-x[k-1])/x[k])) < e:
        break
        
print("T="+str(x[k]))
plt.show()