#include <stdio.h>
int main(void)
{
int a;
	printf("10進数の整数を入力してください");
	scanf("%d",&a);
	printf("10進数の%dは8進数で%o,16進数で%Xです",a,a,a);
return 0;
}
