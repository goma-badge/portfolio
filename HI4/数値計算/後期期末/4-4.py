import matplotlib.pyplot as plt
import numpy as np
import math

A=np.array([[1,3,2],[3,5,-1],[2,-1,3]])
x=np.array([[-1],[-1],[-1]])

ramuda=[]
ramuda.append(1)
eps=0.0000001
k=0

while(1):
    k+=1
    u=np.dot(A,x)
    ramuda.append(np.dot(x.T,u))
    x=u/math.sqrt(np.dot(u.T,u))
    
    if(abs(ramuda[k]-ramuda[k-1])<eps):
       break
print("固有値:"+str(ramuda[k]))
print("固有ベクトル:"+str(x))
