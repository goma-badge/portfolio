x <- c(176.1, 172.3, 165.3, 168.9, 177.8, 180.2, 173.7, 163.9, 170.2, 174.3,
       169.0, 176.1, 171.3, 175.6, 168.2)
y <- c(65.4, 57.5, 61.2, 67.8, 74.3, 73.6, 70.8, 58.3, 65.4, 62.1,
       61.9, 63.4, 71.1, 65.7, 66.9)

plot(x, y, pch=21, xlab="身長", ylab="体重",
     main="ある高校の男子生徒の身長と体重", cex=3,
     bg=ifelse(x>175,
               ifelse(y>70, "springgreen", "skyblue"),
               ifelse(y>70, "yellow2", "hotpink")
               )
     )
text(x, y)
abline(h=70, lty="dotted")
abline(v=175, lty="dotted")
