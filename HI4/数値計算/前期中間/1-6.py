n=5
C=[[6,2,3,4,5,60],[3,4,5,6,2,60],[4,5,6,2,3,55],[5,6,2,3,4,55],[2,3,4,5,6,70]]
x=[1,1,1,1,1]

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
