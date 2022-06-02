#include <stdio.h>
int main(void)
{
	int x,i,j;

	printf("辺の長さ:");
	scanf("%d",&x);

	for(i=0; i<=x; i++){
		for(j =0; i-j>=0; j++)
			putchar(' ');
		for(j =0; x-j-i>0; j++)
			putchar('*');
		puts("");
		}

	return 0;
	}
