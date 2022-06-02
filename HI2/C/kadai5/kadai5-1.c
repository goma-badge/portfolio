#include <stdio.h>
int main(void){
	int a[5] = {1, -3, 15, 200, -20};
	int i;

	for(i=0; i<5; i++)
	a[i]=a[i]*3;
	 

	puts("aの各要素を出力します");
	
	for(i=0; i<5; i++)
		printf("%5d", a[i]);
	putchar('\n');

	return 0;

}

