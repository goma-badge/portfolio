import numpy as np
import math
import sympy
from sympy.plotting import plot
sympy.init_printing(use_unicode=True)

import matplotlib.pyplot as plt
import seaborn as sns

#もとの波形
cal_x=np.arange(-1,1,0.1)
cal_y=sympy.log(1+cal_x)

def mac(x) :
  k3 = 1/math.factorial(3)  #1/3!
  k5 = 1/math.factorial(5)
  k7 = 1/math.factorial(7)
  k9 = 1/math.factorial(9)
  y = x - k3*x**3 + k5*x**5 - k7*x**7 + k9*x**9
  return y



x = sympy.symbols("x")
fx = sympy.log(1+x) #元の関数f(x)


plt.rcParams['figure.figsize'] = 10, 8

f1 = mac(fx, 2)
f2 = mac(fx, 4)
f3 = mac(fx, 6)
f4 = mac(fx, 8)
f5 = mac(fx, 10)
f6 = mac(fx, 12)
f7 = mac(fx, 14)
f8 = mac(fx, 16)

#グラフの出力
mcgra = sympy.plot(f1,f2,f3,f4,f5,f6,f7,f8,fx,legend=True, show=False)
colors = ["orange", "red", "purple", "blue", "green","deepskyblue","fuchsia","lawngreen"]

for i in range(9):
  if i == 8:
    mcgra[i].line_color="black"
    mcgra[i].label='log_e(1+x)'
  else:
    mcgra[i].line_color=colors[i]
    label_i = i+1
    mcgra[i].label='f%d'%label_i

mcgra.show()