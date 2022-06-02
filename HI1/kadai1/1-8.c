#include<stdio.h>
#include<math.h>
float x,s,c;
int main(){
printf("角度を入力してください＞");
scanf("%f",&x);
s=sin(x);
c=cos(x);
printf("%fの時のsinの値は%fで、cosの値は%fです。\n",x,s,c);
return 0;
}

