count = 0
fl = 0

num = input("整数を入力してください:")
x = int(num)

for i in range(1,x+1):
    if x%i==0:
        count+=1
    if count>2:
        fl += 1
    if x==1:
        fl+=1

if fl == 0:
    print(str(x) + "は素数である")
else:
    print(str(x) + "は素数でない")

    