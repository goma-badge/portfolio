n=3
C=[[2,1,1,1],[0,2,1,2],[1,1,1,2]]
x=[1,1,1]

for k in range(0,n):
    for i in range(0,n):
        if(i==k):
            continue
        cdash=C[i][k]/C[k][k]
        for j in range(k,n+1):
            C[i][j]=C[i][j]-C[k][j]*cdash
for i in range(0,n):
    x[i]=C[i][n]/C[i][i]

print(x)
