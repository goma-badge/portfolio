#include<stdio.h>
#include<math.h>
#define F 440
#define LEN 2
#define A 20000
#define SAMPLE_RATE 88200

int main(){
	double t;
	double yL, yR;
	double AL,AR;
	
	for(t=0; t<=LEN; t+= 1.0/SAMPLE_RATE){
		AL=A-A/LEN*t;
		AR=A/LEN*t;

		yL=AL*(sin(2.0*M_PI*F*t));
		yR=AR*(sin(2.0*M_PI*F*t));

		printf("%d\n%d\n",(short)yL,(short)yR);
}
		return 0;
	
}

