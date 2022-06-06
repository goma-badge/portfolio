#include<stdio.h>
int main(void){
    int x,c=0,sum=0;
	double  h;
	printf("整数を入力:");
    while(1){
		scanf("%d",&x);
		if(x<0)
			break;
		sum=sum+x;
		c++;
		}
		h=(double)sum/c;

    printf("合計:%d\n",sum);
	printf("平均:%.2f\n",h);
return 0;
}

