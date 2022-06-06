file=open('1-2sor.txt','w')
e=1e-5
n=2
x=[1,1]
a=[[5,3],[4,6]]
b=[1,6]
omg=1.2

while (1):
    file.write(str(x))
    print(x[0],x[1])
    M=0
    for i in range (0,n):
        S=0
        for j in range(0,n):
            S+=a[i][j]*x[j]
        X=(b[i]-S+a[i][i]*x[i])/a[i][i]
        X=x[i]+omg*(X-x[i])
        if abs((X-x[i])/X)<e:
            M+=1
        x[i]=X

    if(M==n):
        break
print(x)
file.close()