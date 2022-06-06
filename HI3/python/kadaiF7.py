import matplotlib.pyplot as plt

file=".\data_exam.csv"
fileobj=open(file)
eng=list()
math=list()

for i, line in enumerate(fileobj):
    if line=="\n":
        continue
    datalist=line.split(",")
    eng.append(int(datalist[0]))
    math.append(int(datalist[1]))
    x=i

X=eng
Y=math
plt.scatter(X, Y)
plt.show()