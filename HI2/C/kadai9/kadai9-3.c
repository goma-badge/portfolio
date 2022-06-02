#include <stdio.h>
void adjest(int *x){
	if(*x < 0)
		*x = 0;
	if(*x > 10)
		(*x =10);
}

int main(void){
	int x;
	printf("値を入力してください:");
	scanf("%d",&x);
	adjest(&x);
	printf("%d\n",x);
	return 0;
}
