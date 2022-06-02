#include <stdio.h>
int main(void)
{
	int x,i,h,j;

	printf("値を入力してください:");
	scanf("%d",&x);

	for(i=1; i<=x; i++){
		printf("%d",i);
		h=i;
		while(h){
			j =h % 10;
			if(j==3 || i%3==0){
				printf("!");
				break;
				}
			h=h/10;
			}
		printf(" ");
		}

	puts("");

	return 0;
}
