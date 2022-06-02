#include <stdio.h>
#define NINZU 4
int main(void)
{
	int x,y,i,j;
	int ten[NINZU][2];
	int stu[NINZU] ={0};
	int sub[2] ={0};

	for(i=0; i< NINZU; i++){
		printf("No.%dの国語の点数は:",i+1);
		scanf("%d",&ten[i][0]);
		printf("No.%dの数学の点数は:",i+1);
		scanf("%d",&ten[i][1]);

		stu[i] =ten[i][0] +ten[i][1];
		sub[0] += ten[i][0];
		sub[1] += ten[i][1];
	}
	
	printf("     国語   数学  合計   平均\n");

for(i =0; i<NINZU; i++)
	printf("No.%d%5d%6d%6d%7.1f\n", i+1, ten[i][0],ten[i][1],stu[i],(double)stu[i]/2);
	printf("合計: %4d%5d\n",sub[0],sub[1]);
	printf("平均: %5.1f%6.1f\n",(double)sub[0]/NINZU,(double)sub[1]/NINZU);
	
	return 0;
}
