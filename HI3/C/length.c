//2点間の距離を求めるプログラム
#include	<stdio.h>
#include	<math.h>

struct coord {
	double x;
	double y;
};

typedef struct coord Coord;

Coord  input_coord(void);
void   output_coord(Coord );
double length(Coord , Coord );

int  main(void)
{
	Coord  a, b;
	double len;

	a = input_coord();
	output_coord(a);

	b = input_coord();
	output_coord(b);

	len = length(a, b);

	printf("Length = %f\n", len);

	return 0;
}

Coord  input_coord(void)
{
	Coord a;

	printf("Input x and y : ");
	scanf("%lf", &a.x);
	scanf("%lf", &a.y);

	return a;
}

void   output_coord(Coord a)
{
	printf("(%.2f,%.2f)\n", a.x, a.y);
}

double length(Coord a, Coord b)
{
	double dx, dy;

	dx = a.x - b.x;
	dy = a.y - b.y;

	return sqrt(dx * dx + dy * dy);
}
