data <- read.csv("C:/Users/gomad/Desktop/応用数学/課題６/taikaku.csv")

x <- data$taiju
y <- data$shincho
regi <- function(x) 0.507717 * x + 138.839
print(y - regi(x))