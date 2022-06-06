n=3
C=[[1,2,1,1,0,0],[4,5,6,0,1,0],[7,8,9,0,0,1]]
b=[4,2,2]
x=[1,1,1]

for k in range(0,n):
    cdash=C[k][k]
    for j in range(0,2*n):
        C[k][j]=C[k][j]/cdash
    for i in range(0,n):
        if i==k:
            continue
        cdash=C[i][k]
        for j in range(k,2*n):
            C[i][j]=C[i][j]-C[k][j]*cdash
for i in range(0,n):
    x[i]=0
    for j in range(0,n):
        x[i]=x[i]+C[i][n+j]*b[j]
print(x)