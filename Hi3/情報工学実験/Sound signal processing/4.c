#include<stdio.h>
#include<math.h>
#include<unistd.h>
#define LEN 0.5
#define A 20000
#define SAMPLE_RATE 44100
#define F 440
#define C4 261.63
#define D4 293.66
#define E4 329.63
#define F4 349.23
#define G4 392.00
#define A4 440.00
#define B4 493.88
#define C5 523.25

void sound(int n){
	double t;
	double y;

	for(t=0; t<=LEN; t+=1.0/SAMPLE_RATE){
		y=A*sin(2.0*M_PI*n*t);
		printf("%d\n%d\n",(short)y,(short)y);
	}
}

int main(void){
sound(C4);
sound(D4);
sound(E4);
sound(F4);
sound(E4);
sound(D4);
sound(C4);
sleep(1);
sound(E4);
sound(F4);
sound(G4);
sound(A4);
sound(G4);
sound(F4);
sound(E4);

 return 0;
}
