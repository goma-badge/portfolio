y = int(input("値を入力してください:"))
fl = 0
su = y

for i in range(y):
    for j in range(su):
        if su%(j+1)==0:
            fl+=1
            
    if fl == 2:
        print(su)
    fl=0
    su-=1