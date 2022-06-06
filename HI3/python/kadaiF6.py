file="./data_exam.csv"
fileobj=open(file)
eng=0
math=0
cnt=0

for i, line in enumerate(fileobj):
    if line=="\n":
        continue
    datalist=line.split(",")
    eng+=int(datalist[0])
    math+=int(datalist[1])
    cnt+=1

print("英語"+str(round(eng/cnt, 1))+"\n数学"+str(round(math/cnt, 1)))