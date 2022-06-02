#include<stdio.h>
double calcavg(int *v, int n){
int i;
double sum =0;
for(i=0; i<n; i++){
	sum += *v;
	v++;
	}
	return sum/n;
}
int main(void){
	int x[] = {10,12,7,20};
	printf("%.2f\n",calcavg(x,4));
	return 0;
}
