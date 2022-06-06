x=[3]#初期値
k=0
e=10**-5
while True:
    k = k+1
    X = x[k-1]-((x[k-1]**2-7)/(2*x[k-1]))
    x.append(X)
    print((x[k]))
    if (abs((x[k]-x[k-1])/x[k]) < e):
        break 

print("ニュートン法:"+str(x[k]))