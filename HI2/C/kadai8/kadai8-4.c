#include<stdio.h>
int main(void)
{	
	char a[50];
	int b=0;
	printf("文字列を入力してください:");
	scanf("%s",a);
	
	while(a[b]){
		printf("%d番目の文字:%c(文字コード:%X)\n",b,a[b],a[b]);
		b++;
	}

	return 0;
}

