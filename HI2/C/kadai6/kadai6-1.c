#include <stdio.h>
int factorial(int n){
int a=1,i;
for(i=1; i<=n; i++)
a *= i;
return a;
}
int main(void){
	int x;
	printf("整数を入力してください");
	scanf("%d",&x);
	printf("%dの階乗は%dです。\n",x,factorial(x));
	
	return 0;
}

