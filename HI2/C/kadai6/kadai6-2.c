#include <stdio.h>
int hello(int n)
{
while(n>0){
n--;
printf("Hello!\n");
}
return n;
}
int main(void)
{
int n; 
	printf("How many times?:");
	scanf("%d",&n);
	hello(n);
	return 0;
	}
