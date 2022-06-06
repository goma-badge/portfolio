def isLeepYear(year):
    if year % 400 == 0:
        return True

    elif year % 4 == 0 and year % 100 == 0:
        return False

    elif year % 4 == 0:
        return True

    else:
        return False

year = int(input("西暦を入力してください:"))
    
if isLeepYear(year):
    print(str(year) + "年はうるう年です")
else:
    print(str(year) + "年はうるう年ではありません")

