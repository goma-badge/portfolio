file=open('1-3gous.txt','w')
import math
e=1e-5
n=3
x=[1,1,1]
a=[[2,1,1],[0,2,1],[1,1,1]]
b=[1,2,2]

while (1):
    file.write(str(x)+'\n')
    print(x[0],x[1],x[2])
    M=0
    for i in range (0,n):
        S=0
        for j in range(0,n):
            S+=a[i][j]*x[j]
        X=(b[i]-S+(a[i][i]*x[i]))/a[i][i]
        try:
            if abs((X-x[i])/X)<e:
                M+=1
        except ZeroDivisionError:
            M+=0
        x[i]=X
    if(M==n):
        break
print(x)
file.close()