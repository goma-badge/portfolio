#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct {
    double x;
    double y;
}coord;

coord input_coord(void);
void output_coord(coord a);
double length(coord a,coord b);

int main(void){
    coord a,b;
    double len;
    a=input_coord();
    output_coord(a);

    b=input_coord();
    output_coord(b);
    
    len=length(a,b);
    
    return 0;
}



coord input_coord(void){
    coord name;
    printf("x軸を入力：");
    scanf("%lf",&name.x);
    printf("y軸を入力：");
    scanf("%lf",&name.y);
    
    return name;
}


