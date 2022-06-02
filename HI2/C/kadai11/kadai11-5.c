#include<stdio.h>
#include<math.h>

struct point{
	int x;
	int y;
};
int main(void){
	struct point pts[4];
	int i,j,m;
	for(i=0; i<4;i++){
	printf("点%d: ",i);
	scanf("%d, %d", &pts[i].x, &pts[i].y);
	}
	printf("2つの点を指定してください: ");
	scanf("%d",&m);
	scanf("%d",&j);
	double a,b,c,d;
	a=pow(pts[m].x - pts[j].x,2);
	b=pow(pts[m].y - pts[j].y,2);
	c=a+b;
	d=sqrt(c);
	printf("点%dと点%dの間の距離は%.2fです。",m,j,d);

	return 0;
}
