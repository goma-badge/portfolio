file="./desktop/Brainwave_14ch_128Hz_AU.csv"

with open(file, "r", encoding="utf_8") as fileobj:
    while True:
        line = fileobj.readline()
        aline = line.rstrip()
        
        if aline:
            print(aline)
        else:
            break
