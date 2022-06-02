#include<stdio.h>
int main(void)
{
	int i;
	char seasons[][10]={"spring","summer","autumn","winter"};

	printf("月を入力してください:");
	scanf("%d",&i);

	if(i>=3 && i<=5){
		printf("%s\n",seasons[0]);
	}else if(i>=6 && i<=8){
		printf("%s\n",seasons[1]);
	}else if(i>=9 && i<=11){
		printf("%s\n",seasons[2]);
	}else if(i>=1 && i<3 || i==12){
		printf("%s\n",seasons[3]);
	}
	
	return 0;
}
