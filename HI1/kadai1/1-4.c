#include <stdio.h>

 int main(){
 float r,a,k,s;
 printf("台形の上底を入力してください＞");
scanf("%f",&r);
printf("台形の下底を入力してください＞");
scanf("%f",&a);
printf("台形の高さを入力してください＞");
scanf("%f",&k);
s=(r+a) * k *0.5;
printf("面積は%fです。\n",s);
return 0;
}

