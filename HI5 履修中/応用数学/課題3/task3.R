q1 <- c(1,1,0,2,0,2,0,2,2,1,0,2,1,1,1)
l1 <- c("20代未満", "30~50代", "60代以上")
q2 <- c(0,1,0,1,2,0,2,0,0,1,2,1,0,1,0)
l2 <- c("ニュース", "スポーツ", "ドラマ")

r1 <- l1[q1+1]
r2 <- l2[q2+1]

t <- addmargins(table(r1, r2))
print.table(t)

p1 <- prop.table(table(q1))
p1 <- round(100*p1, digit = 1)
labs <- l1
labs <- paste(labs, p1)
names(p1) <- labs
pie(p1, col = rainbow(length(p1)), border = "white")

p2 <- prop.table(table(q2))
p2 <- round(p2, digit = 2)
labs <- l2
labs <- paste(labs, p2)
names(p2) <- labs
pie(p2, col = rainbow(length(p2)), border = "white")
