import matplotlib.pyplot as plt

file = "random_data1000.csv"
list_X = []
i = 0

with open(file,"r",encoding="utf_8") as fileobj:
    while True:
        line = fileobj.readline()
        aline = line.rstrip()
        if aline:
            list_X.append(int(aline))
            i += 1
        else:
            break

print(list_X)
print("データ数は" + str(len(list_X)))


x_pos = range(0,len(list_X))
plt.bar(x_pos, list_X)
plt.show()

for i in range(len(list_X)-1):
    for j in range(len(list_X) - 1):
        if list_X[j] > list_X[j + 1]:
            tmp = list_X[j]
            list_X[j] = list_X[j + 1]
            list_X[j+1]=tmp

plt.bar(x_pos, list_X)
plt.show()
print("中央値"+str(list_X[int(len(list_X)/2)]))

