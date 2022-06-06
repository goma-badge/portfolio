import matplotlib.pyplot as plt

file = "Brainwave_14ch_128Hz_AU.csv"
wave = []
xdata = []
ydata = []
count = 0
c = int(input("間隔:"))
xsum = 0
ysum = 0
xsum2 = []
ysum2 = []
gflag = int(input("重なったグラフ+1,別々のグラフ+2:"))

with open(file, "r", encoding="utf_8") as fileobj:
    line = fileobj.readline()
    aline = line.rstrip()
    aline2 = aline.split(",")
    while True:
        line = fileobj.readline()
        aline = line.rstrip()
        aline2=aline.split(",")
        if aline:
            wave.append(aline2)
        else:
            break
        
for i in range(0, 1281):
    x = float(wave[i][0])
    xdata.append(x)
    y = float(wave[i][1])
    ydata.append(y)

for i in range(0, 1281):
    x = float(xdata[i])
    y = float(ydata[i])
    xsum += x
    ysum += y
    if count == c:
        xsum = xsum / (c + 1)
        xsum2.append(xsum)
        ysum = ysum / (c + 1)
        ysum2.append(ysum)
        xsum = 0
        ysum = 0
        count = 0
        continue
    count += 1
    
if gflag == 1:
    plt.plot(xdata, ydata)
    plt.plot(xsum2, ysum2)
    plt.show()

if gflag == 2:
    plt.plot(xdata, ydata)
    plt.show()
    plt.plot(xsum2, ysum2)
    plt.show()