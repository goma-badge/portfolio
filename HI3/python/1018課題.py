year = int(input("西暦を入力してください:"))
if year % 100 == 0 and year % 400 != 0:
    ans = str(year)+"年は平年である。"
    print (ans)
    elif　year % 4 ==0:
        ans = str(year)+"年は閏年である。"
            print(ans)
    else 
        ans = str(year)+"年は平年である"
        
        print (ans)
    