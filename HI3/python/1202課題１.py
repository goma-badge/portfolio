file = "./Desktop/data_eng.csv"
fileobj = open(file)
text = fileobj.read()
fileobj.close()
print(text)