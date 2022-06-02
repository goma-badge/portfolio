#include <stdio.h>
#define NUMBER 4 
int main(void)
{
	int a[NUMBER] = {0};
	int i,j;

	printf("値を4個入力してください\n");

	for(i=0; i<NUMBER; i++)
		scanf("%d",&a[i]);

	printf("{");

	for(j=0; j<NUMBER; j++){
		printf("%d",a[j]);
		if(j<NUMBER-1)
			printf(",");
		}
	
	printf("}\n");

	return 0;
}
