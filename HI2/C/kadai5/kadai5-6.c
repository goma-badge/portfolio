#include <stdio.h>

#define NUMBER 10

int main(void)
{
	int i,j;
	int num;
	int tensu[NUMBER];
	int bunpu[4] ={0};

	printf("人数を入力してください:");
	scanf("%d",&num);

	printf("%d人の点数を入力してください。\n",num);

	for(i = 0; i<num; i++){
		printf("No.%2d:", i + 1);
		do{
			scanf("%d",&tensu[i]);
			if(tensu[i] < 0 || tensu[i] > 100)
				printf("0～100で入力してください:");
				}while(tensu[i] < 0 ||tensu[i] > 100);
				bunpu[tensu[i] / 10]++;
			}
	puts("\n--成績分布--");
	printf("優  :");
	
	for( i > 8;  i<bunpu[3]; j++)
		putchar('*');
	putchar('\n');


	for(i=7; i
	}
	return 0;
}
