data <- read.csv("C:/Users/gomad/Desktop/応用数学/課題５/shiken.csv")
x <- data$butsuri
y <- data$sugaku

# 相関係数
print(cor(x, y))

plot(x, y,
     xlab="物理", ylab="数学", main="物理と数学の点数",
     pch=21, cex=3,
     bg=ifelse(x>80,
               ifelse(y>80, "springgreen", "skyblue"),
               ifelse(y>80, "yellow2", "hotpink")
     ))
text(x, y)
abline(h=80, lty="dotted")
abline(v=80, lty="dotted")
