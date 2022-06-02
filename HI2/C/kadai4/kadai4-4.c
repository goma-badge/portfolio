#include <stdio.h>
int main(void)
{
	int x,i,a=1;

	printf("整数を入力してください:");
	scanf("%d",&x);

	for(i=1;i<=x;i++)
	{
		printf("%d",i);
		a = i * a;
		if(i < x)
			printf("*");
		}
	
	printf(" = %d",a);
	puts("");

	return 0;
}
