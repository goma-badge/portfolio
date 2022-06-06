def isLeepYear(y):
    if y % 400 == 0:
        return True

    elif y % 4 == 0 and y % 100 == 0:
        return False

    elif y % 4 == 0:
        return True

    else:
        return False

y = int(input("西暦を入力してください:"))
    
if isLeepYear(y):
    print(str(y) + "年はうるう年です")
else:
    print(str(y) + "年はうるう年ではありません")
