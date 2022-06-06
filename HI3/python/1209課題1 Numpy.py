import numpy as np
import math
import matplotlib.pyplot as plt

X = np.linspace(0,2*np.pi)
Y =2*np.sin(2*X)

plt.xlim(0,7)
plt.ylim(-2.0,2.0)
plt.plot(X, Y)
plt.show()