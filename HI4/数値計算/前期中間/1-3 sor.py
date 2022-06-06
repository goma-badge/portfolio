file=open('1-3sor.txt','w')
e=1e-5
n=3
x=[1,1,1]
a=[[2,1,1],[0,2,1],[1,1,1]]
b=[1,2,2]
omg=1.2

while (1):
    file.write(str(x)+'\n')
    print(x[0],x[1],x[2])
    M=0
    for i in range (0,n):
        S=0
        S2=0
        for j in range(0,n):
            S+=a[i][j]*x[j]
            S2+=a[i][j]
        X=(b[i]-S+a[i][i]*x[i])/a[i][i]
        X=x[i]+omg*(X-x[i])
        if abs((X-x[i])/X)<e:
            M+=1
        x[i]=X

    if(M==n):
        break
print(x)
file.close()