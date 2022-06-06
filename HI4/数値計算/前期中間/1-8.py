import numpy as np
import math
import sympy
from sympy.plotting import plot
sympy.init_printing(use_unicode=True)

import matplotlib.pyplot as plt
import seaborn as sns

def mac(fo,max): #マクローリン展開
  f = fx
  app = np.sum([(sympy.diff(f, x, k).subs(x, 0) / (math.factorial(k))) * ((x)**k) for k in range(max)])
  return app


x = sympy.symbols("x")
fx = math.e**x #元の関数f(x)


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
    mcgra[i].label='e^x'
  else:
    mcgra[i].line_color=colors[i]
    label_i = i+1
    mcgra[i].label='f%d'%label_i

mcgra.show()