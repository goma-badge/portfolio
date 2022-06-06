import numpy as np

mat=[[-4,1,1,-20],
    [1,-4,0,-80],
    [1,0,-4,-80]]

np.array(mat)
for k in range(0,3):
    for i in range(0,3):
        if(k==i):
            continue
        X=mat[i][k]/mat[k][k]
        for j in range(k,4):
            mat[i][j]=mat[i][j]-mat[k][j]*X
            
for l in range(0,3):
    print(mat[l][3]/mat[l][l])