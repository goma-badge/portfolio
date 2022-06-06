#include<stdio.h>
#include<math.h>

typedef struct{
    double x;
    double y;
}Coord;

Coord p1,p2;

void print_point(Coord p);
double length(void);

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

void print_point(Coord p)
{
    printf("(%.1f,%.1f)\n",p.x,p.y);
}

double length(void)
{
    double dx, dy;

    dx = p1.x - p2.x;
    dy = p1.y - p2.y;

    return sqrt( dx*dx + dy*dy );
}