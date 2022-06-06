#include<stdio.h>
#include<math.h>
#include"prog_coord.h"

int main(void)
{
    double len;

    p1.x = 10.0; p1.y = 10.0;
    p2.x = 20.0; p2.y = 20.0;

    printf("p1="); print_point(p1);
    printf("p2="); print_point(p2);

    len = length();

    printf("len=%.1f\n",len);

    return 0;
}