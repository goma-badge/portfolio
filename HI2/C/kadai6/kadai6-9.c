#include <stdio.h>
int getmu13num(int v[],int len){
int count = 0,i;
	for(i=0; i<len; i++){
		if(v[i]% 3 ==0)
			count++;
		}
	return count;
}
int main(void){
	int x[6] = {10,8,3,14,15,26};
	printf("３の倍数の値は%d個含まれています.\n",getmu13num(x,6));
	return 0;
}
