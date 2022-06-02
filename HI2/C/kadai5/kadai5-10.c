#include <stdio.h>
int main(void)
{
	int a[10][10];
	int i,j;

	for(i=1; i<10; i++){
		for(j=1; j<10; j++){
			
		if(i==j)
			printf("%5d",i);
		else
			printf("%5d",0);
		}
		putchar('\n');
	}
	return 0;
}

