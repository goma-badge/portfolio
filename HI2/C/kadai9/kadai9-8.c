#include<stdio.h>

int main(void){
	int x[] = {1, 3, 0, 10, 50, 100, -1};
	int *p=x,i,sum=0;
		for(i=0;i<8;i++){
			if(*(p+i)>0)
				sum+=*(p+i);
			}
		printf("合計:%d\n",sum);
	return 0;
}
