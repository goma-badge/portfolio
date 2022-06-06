import numpy as np

mat=[[-4,1,1,-80],
   [1,-4,0,-400],
   [0,1,-4,-400]]

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