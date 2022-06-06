import matplotlib.pyplot as plt

X = [[] for i in range(15)]

file = "./Brainwave_14ch_128Hz_AU.csv"
with open(file,"r",encoding = "utf_8") as fileobj:
    line = fileobj.readline()
    while True:
        line = fileobj.readline()
        aline = line.rstrip()
        if aline:
            text = aline.split(",")
            # print(text)
            for i in range(14):
                X[i].append(float(text[i]))
        else:
            break

X_avg = []

for j in range(len(X[1])):
    if 4 <= j < len(X[1])-4:
        sum_j = 0
        for i in range(j-4,j+5):
            sum_j += X[1][i]
        X_avg.append(sum_j/9)
    else:
        X_avg.append(X[1][j])

fig = plt.figure(figsize=(12,4))
ax1 = fig.add_subplot(1,2,1)
ax1.plot(X[0],X[1])

ax2 = fig.add_subplot(1,2,2)
ax2.plot(X[0],X_avg)
plt.show()