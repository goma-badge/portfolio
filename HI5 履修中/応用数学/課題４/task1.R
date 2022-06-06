tsuki <- 1:12
ondo <- c(5.7,7.1,10.6,15.7,20.2,23.6,27.3,28.2,24.9,19.1,13.1,7.8)
kosuiryo <- c(60.1,83.3,137.9,145.9,195.5,404.9,400.8,173.5,170.4,
              79.4,80.6,53.6)

ondo.lim <- c(min(ondo), max(ondo))
kosuiryo.lim <- c(min(kosuiryo), max(kosuiryo))

par(oma = c(0, 1, 0, 3))

plot(tsuki, ondo, ylim=ondo.lim, type="o", pch=21,
     col="red", bg="red4", xlab="月", ylab="気温[℃]", axes=F,
     main="熊本県の平均気温と降水量")
axis(1, at=tsuki)
axis(2)

par(new=T)
plot(tsuki, kosuiryo, ylim=kosuiryo.lim, type="o", pch=21,
     col="blue", bg="blue4", lty="dotted", xlab="", ylab="", axes=F)
mtext("降水量[mm]", side=4, line=3)
axis(4)

box()

legend("topleft", legend=c("気温", "降水量"),
       lty=c("solid", "dotted"), col=c("red", "blue"))
