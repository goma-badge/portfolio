data <- read.csv("C:/Users/gomad/Desktop/応用数学/課題５/taikaku.csv")
x <- data$taiju
y <- data$shincho

# 相関係数
print(cor(x, y))

# plot
plot(x, y,
     xlab="身長[cm]", ylab="体重[kg]", main="身長と体重の関係",
     pch=21, cex=3,
     bg=ifelse(x>70,
               ifelse(y>175, "springgreen", "skyblue"),
               ifelse(y>175, "yellow2", "hotpink")
     ))
text(x, y)
abline(h=175, lty="dotted")
abline(v=70, lty="dotted")

# 回帰分析
rg <- lm(y ~ x)
abline(rg, col="red", lwd=2)
print(rg$coefficient[1])  # 切片
print(rg$coefficient[2])  # 傾き

print(summary(rg))

d2 <- read.csv("C:/Users/gomad/Desktop/応用数学/課題５/shiken.csv")
print(summary(lm(d2$sugaku ~ d2$butsuri)))
