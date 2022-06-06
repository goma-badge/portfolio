import sys
import matplotlib.pyplot as plt

file ="Temperature.csv"
with open(file,"r",encoding="utf_8") as fileobj:
    
    print("入力された番号の場所の最高、最低気温を表示\n0=熊本,1=阿蘇,2=天草")
    N=int(input("番号を入力してください:"))
    
    if N>=3 or N<0:
        print("0から2までの数字を入力してください")
        sys.exit()

    m=N+2
    spot=["kumamoto","aso","amakusa"]
    area=list()
    label=list()
    day=list()
    hour=list()
    damax=list()
    damin=list()
    
    tmpmax=0
    tmpmin=0
    a=1

    line = fileobj.readline()
    
    while True:
        line = fileobj.readline()
        if line:
            data = line.rstrip()
            data = line.split(",")
            if a>0:
                tmp=float(data[m])
                if tmp >= tmpmax or tmpmax==0:
                    tmpmax=tmp
                if tmp<=tmpmin or tmpmin==0:
                    tmpmin=tmp
                if data[0]!="Date":
                    if data[0]!="":      
                        label.append(data[0])
                    if a>0 and a%24==0:
                        damax.append(tmpmax)
                        damin.append(tmpmin)
                        tmpmax=0
                        tmpmin=0
        else:
            break
        a+=1


xpos=range(len(damax))
plt.plot(xpos,damax,label="max")
plt.plot(xpos,damin,label="min")
plt.ylabel(spot[N]+"-Temp[℃]")
plt.xlabel("Date")
plt.xticks(xpos,label,rotation="vertical")
plt.legend(loc="upper right")
plt.show()