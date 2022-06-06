#初期設定
file=open('1-1.txt','w')
e=1e-5
n=2
x=[1,1]
a=[[3,-1],[2,4]]
b=[2,1]

while (1):
    file.write(str(x))
    print(x[0],x[1])
    M=0     #終了条件のための変数初期化
    for i in range (0,n):   #行についてのループ
        S=0
        for j in range(0,n):    #列についてのループ
            S+=a[i][j]*x[j]
        X=(b[i]-S+a[i][i]*x[i])/a[i][i]
        if abs((X-x[i])/X)<e:   #収束判定
            M+=1
        x[i]=X
    if(M==n):   #終了条件
        break
print(x)    #計算結果の出力
file.close()