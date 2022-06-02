#include<stdio.h>
int main(void){
int a;
	printf("16進数の整数を入力してください:");
	scanf("%X",&a);
	printf("16進数の%Xは10進数で%dです",a,a);

	return 0;
}

