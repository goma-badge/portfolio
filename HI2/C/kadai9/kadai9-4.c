#include <stdio.h>
int topower(int  *p, int y){

int a ,b;
 a=*p;
 for(b =0; b<y-1; b++)
 	*p *= a;
}

int main(void)
{
	int x, y;
	printf("２つの整数を入力してください:");
	scanf("%d %d",&x,&y);
	topower(&x,y);
	printf("%d\n",x);
	
	return 0;
}

