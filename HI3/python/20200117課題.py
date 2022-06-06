import matplotlib.pyplot as plt

file = "Kumamoto_Temperature2.csv"

time=[]
kumamoto=[]
i = input("月日の入力(例:1/1 範囲:12/29から1/4まで)")
day = i.split("/")
print(day[0] + "/" + day[1])


with open(file, encoding="utf_8") as fileobj:
    line = fileobj.readline()
    
    while True:
        line = fileobj.readline()

        if line:
            aline = line.rstrip()
            data = aline.split(",")
            data1 = data[0].split(" ")
            data2 = data1[0].split("/")
            
            if (day[0] == data2[1] and day[1] == data2[2]):
                time.append(data[0])
                kumamoto.append(float(data[1]))

        else:
            break

xpos =range(len(time))

plt.title("")
plt.plot(xpos, kumamoto,marker="o")
plt.xticks(xpos, time, rotation="vertical")
plt.show()