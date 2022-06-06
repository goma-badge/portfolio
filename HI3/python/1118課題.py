def isPrime(x):
    for i in range(2, x):
        if x % i == 0:
            return False
    return True

y = int(input("値を入力してください:"))
    
for x in range(2, y + 1):
    if isPrime(x):
        print(x)
