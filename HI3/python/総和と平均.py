score = 0
count = 0
while True:
    n = (input("数値を入力してください："))

    if n == "end":
        break
    else:
        n = int(n)
        score += n
        count += 1
average = score/count
print("総和は" ,score, "平均値は",average,"です。")