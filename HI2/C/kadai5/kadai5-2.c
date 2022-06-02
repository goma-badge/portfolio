#include <stdio.h>
int main(void){
	double da[] = {-2.5, 10.8, 3.35, 11.1, -123.5, 11.111};
	double max= da[0];
	int i,len;


	len =sizeof(da)/sizeof(da[0]);

	for(i = 0; i<len;i++){
		if(da[i]>max){
			max = da[i];
		}
	}

	printf("%f",max);
	return 0;
}
