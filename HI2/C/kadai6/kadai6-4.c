#include <stdio.h>
int factsum(int n){
	int sum=1,i, a=0;
	for(i=1; n>=i; i++){
		sum =i*sum;
		a+=sum;
	}
	return a;
}
	 
int main(void){
	int b;
	printf("Input n:");
	scanf("%d",&b);
	printf("%d\n",factsum(b));

	return 0;
}
