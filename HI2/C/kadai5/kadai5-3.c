#include <stdio.h>

#define NUMBER 5

int main(void)
{
	int i,j;
	int	x[NUMBER];

	for(i=0; i<NUMBER; i++){
		printf("値を入力してください:");
		scanf("%d",&x[i]);
	}
		printf("逆順に表示します\n");
		for(j=0; j<NUMBER; j++){
		printf("%d\n",x[NUMBER-1-j]);
	}
	
	return 0;
}

