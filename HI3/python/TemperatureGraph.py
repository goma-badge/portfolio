import matplotlib.pyplot as plt

file = "desktop/Kumamoto_Temperature.csv"

time = []
kuma = []
otohime = []
yatsu= []
ushi = []

with open(file, encoding="utf_8") as fileobj:
    line = fileobj.readline()
    
    while True:
        line = fileobj.readline()

        if line:
            aline = line.rstrip()
            data = aline.split(",")
            
            time.append(data[0])
            kuma.append(float(data[1]))
            otohime.append(float(data[2]))
            yatsu.append(float(data[3]))
            ushi.append(float(data[4]))
        else:
            break

xpos = range(len(time))

plt.plot(xpos, kuma)
plt.plot(xpos, otohime)
plt.plot(xpos, yatsu)
plt.plot(xpos, ushi)
plt.xticks(xpos, time)
plt.xticks(xpos, time, rotation="vertical")
plt.show()
