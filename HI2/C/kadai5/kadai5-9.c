#include <stdio.h>
int main(void)
{
	int a[5][3];
	int i,j;
	puts("各要素の値を確認します");
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			if(j==0)
				a[i][j]=i+1;
			else
				a[i][j]=(i+1)*a[i][j-1];
				printf("%5d",a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
				
