#include<stdio.h>
#include<math.h>
#include"prog_coord.h"

Coord p1,p2;

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