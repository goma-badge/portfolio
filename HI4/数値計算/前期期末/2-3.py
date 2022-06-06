a = 0
b = 1
k = 0
n = 100
h = (b - a)/n
x = [0]*(n+1)
S = 0

def kubun():
    S1=0
    for k in range(n):
        x[k] = a + k * h
        S1 += 4 / (1 + x[k]**2) * h
    return S1

def daikei():
    S2=0
    for k in range(n):
        x[k] = a + k * h
        x[k + 1] = a + (k + 1) * h
        S2+= h * 0.5 * ((4 / (1 + x[k]**2)) + (4 / (1 + x[k + 1]**2)))
    return S2

def sinp():
    S3=0
    for k in range(int(n/2)):
        x[2*k] = a + (2*k)*h
        x[2*k+2] = a + (2*k+2) * h
        S3 += h * 1/3 * ((4 / (1 + x[2*k]**2)) + (4 * 4 / (1 + x[2*k+1]**2)) + (4 / (1 + x[2*k+2]**2)))
    return S3

print("区分求積法:"+str(kubun()))
print("\n台形公式による解法:" +str(daikei()))
print("\nシンプソンの公式による解法:" + str(sinp()))