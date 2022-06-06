file = "./desktop/data_eng.csv"
with open(file, "r", encoding="utf_8") as fileobj:
    data = fileobj.readlines()
    print(data)
    fileobj.close()
