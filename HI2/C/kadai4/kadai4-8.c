#include <stdio.h>
int main(void)
{
	int x,i,cou;

	printf("何の倍数をスキップしますか？:");
	scanf("%d",&x);

	for(i=1; i<=10; i++){

		if(i%x!=0){
			printf("%d ",i);
			cou++;
			continue;
			}

		}
	puts("");
	printf("全部で%d個の数値を出力しました。\n",cou);

	return 0;
}
