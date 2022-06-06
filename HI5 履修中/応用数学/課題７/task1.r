x<-c(65.4,57.5,61.2,67.8,74.3,73.6,70.8,58.3,65.4,62.1,61.9,63.4,71.1,65.7,66.9)
d<-density(x)
rx<-range(d$x)
ry<-range(d$y)
hist(x, probability=T, xlim=rx, ylim=ry,
main="Weight of male students in class",
xlab="weight[kg]", ylab="person", col="lightblue")
polygon(d,col="#00ff0040")