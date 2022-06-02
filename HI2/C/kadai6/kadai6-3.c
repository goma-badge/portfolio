#include <stdio.h>
double power(double x ,int n)
{
	int i;
	double tmp = 1.0;

	for(i =1; i<= n; i++)
		tmp *= x;
	return tmp;
}

int main(void)
{
double a;
int b;
printf("実数xと整数nを入力してください.");
printf("実数x:");
scanf("%lf",&a);
printf("整数n:");
scanf("%d",&b);

printf("%.6fの%d乗は%.6fです。\n", a, b, power(a, b));
return 0;
}

