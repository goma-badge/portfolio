#include <stdio.h>

 int main (){
 float r, s,l;
 printf("半径を入力してください＞");
 scanf("%f",&r ) ;
 s=3.141592 * r * r;
 l=3.141592 * 2 * r;
 printf("半径%fの円の円周は%f面積は%fです。\n",r,l,s);
 return 0;
}


