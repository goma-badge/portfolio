data <- read.csv("C:/Users/gomad/Desktop/応用数学/課題６/taikaku.csv")
x <- data$taiju
y <- data$shincho

#決定係数
rs <- residuals(rg)
rss <- sum(rs ^ 2)
print(1 - rss / sum((y-mean(y))^2))

#調整された決定係数
n <- length(x)
df <- 2 - 1
print(1 - (rss / (n-df-1)) / (sum((y-mean(y))^2) / (n-1)))