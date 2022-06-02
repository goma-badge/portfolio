#include <stdio.h>
int main(void)
{
	int x;

	while(1){
		scanf("%d",&x);
		if(x>0 && x<10)
			break;
		puts("もう一度入力してください");
		}

	puts("OK");

	return 0;
}
