#include<stdio.h>
int main(void)
{
	char a[48];
	char b[48];

	printf("名字を入力してください:");
	scanf("%s",a);

	printf("下の名前を入力してください:");
	scanf("%s",b);

	printf("あなたのイニシャルは%c.%cです",b[0],a[0]);

return 0;
}
