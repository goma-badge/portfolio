import matplotlib.pyplot as plt
import sympy as sym
import math

e=1e-6
x=[]
x1=[]
y=[4]
y1=[]
x.append(2)
k=0
h=1
x1.append(x[0])
y1.append(y[0])

while (1):
    k=k+1
    h=h/2
    print(x[k-1])
    if((x[k-1]**2-7)*((x[k-1]+h)**2-7)<0):
        X=x[k-1]
        x.append(X)
    else:
        X=x[k-1]+h
        x.append(X)
    if(e>h):
        break

print("\n二分法:"+str(x[k]))