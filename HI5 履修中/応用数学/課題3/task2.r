tenki <- c("hare", "kumori", "hare", "hare", "kumori", "ame", "hare")
hyou <- table(tenki)
wariai <- round(100*prop.table(hyou), digits = 1)
labs <- names(hyou)
labs <- paste(labs, wariai, "%")
names(hyou) <- labs
pie(
hyou,
labels = labs,
clockwise = T,
main = "ある週の天気",
col = rainbow(length(hyou)),
border = "white"
)
par(new=T)
pie(1,radius=0.5,col="white",border="white",labels="")