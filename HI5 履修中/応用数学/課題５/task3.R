data <- read.csv("C:/Users/gomad/Desktop/応用数学/課題５/taikaku1.csv")

# 対散布図
plot(data,
     labels=c("身長[cm]", "体重[km]", "胸囲[cm]"),
     main="身長と体重と胸囲の対散布図",
     pch=21, bg="skyblue", cex=2)

# 相関係数行列
print(cor(data))
