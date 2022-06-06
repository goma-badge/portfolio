import matplotlib.pyplot as plt
import math
import numpy as np

h = 0.5
x_m = 20
x_euler = []
y = []
y_euler = []
y_runge2 = []
y_runge3 = []
y_runge4 = []
x_euler . append (1)
y_euler . append (1)
y_runge4 . append (1)
y_runge3 . append (1)
y_runge2 . append (1)
n=2
def f(x):
    return math.pow(x,n)

def f_euler (x ,y ):
    return (2*y)/x



i = 0
while (1):
    y_euler.append ( y_euler [ i] + h * f_euler ( x_euler [i] , y_euler [i ]))
    x_euler . append ( x_euler [ i] + h )
    if( x_euler [i +1] > x_m ):
        break
    i += 1

for i in x_euler :
    y. append (f(i))

x_tmp = 1

for i in range ( len ( x_euler ) -1):
    y_runge2 . append ( y_runge2 [ i] + h * f_euler ( x_tmp , y_runge2 [i ]))
    x_tmp += h
    
x_tmp = 1
for i in range ( len ( x_euler ) -1):
    k1 = h* f_euler ( x_tmp , y_runge3 [i ])
    k2 = h* f_euler ( x_tmp + h /2 , y_runge3 [i ]+ k1 /2)
    k3 = h* f_euler ( x_tmp +h , y_runge3 [i ]+2* k2 - k1 )
    
    y_runge3 . append ( y_runge3 [ i] +( k1 +4* k2 + k3 )/6)
    x_tmp += h
x_tmp = 1

for i in range ( len ( x_euler ) -1):
    k1 = h* f_euler ( x_tmp , y_runge4 [i ])
    k2 = h* f_euler ( x_tmp + h /2 , y_runge4 [i ]+ k1 /2)
    k3 = h* f_euler ( x_tmp + h /2 , y_runge4 [i ]+ k2 /2)
    k4 = h* f_euler ( x_tmp +h , y_runge4 [i ]+ k3 )
    
    y_runge4 . append ( y_runge4 [ i] +( k1 +2* k2 +2* k3 + k4 )/6)
    x_tmp += h


plt. plot ( x_euler , y ,label = " Analysis ")
plt. plot ( x_euler , y_runge2 , label = "Runge2nd")
plt. plot ( x_euler , y_runge3 ,label = "Runge3rd")
plt . plot ( x_euler , y_runge4 , label = "Runge4th")
plt. plot ( x_euler , y_euler ,label = " Eular ")
plt. legend ( loc =0) # 凡 例
plt . show ()