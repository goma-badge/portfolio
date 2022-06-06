#include<stdio.h>
int main(void){
    int x;
    int *xp;

   printf("int              =%dbyte\n", sizeof(int));
   printf("char             =%dbyte\n",sizeof(char));
   printf("short int        =%dbyte\n",sizeof(short int));
   printf("long int         =%dbyte\n",sizeof(long int));
   printf("long long int    =%dbyte\n",sizeof(long long int));
   printf("float            =%dbyte\n",sizeof(float));
   printf("double           =%dbyte\n",sizeof(double));
   printf("long double      =%dbyte\n\n",sizeof(long double));

   printf("x                =%dbyte\n",sizeof(x));
   printf("*xp              =%dbyte\n",sizeof(xp));
   printf("&x               =%dbyte\n",sizeof(&x));

   //アドレス
   printf("&x               =%18p\n",&x);
   printf("&xp              =%18p\n",&xp);
   
   return 0;
}