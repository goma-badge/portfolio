#include<stdio.h>
#include<math.h>
#define ESP 1.0e-4

struct zahyo{
    double x;
    double y;
};

typedef struct zahyo Point;

Point input_point(void);
void output_point(Point);
void length(Point ,Point,Point);
void judge(double,double,double);


int main(void){
    Point  a, b,c;
	double ab,ac,bc;

	a = input_point();
	output_point(a);

	b = input_point();
	output_point(b);

    c = input_point();
	output_point(c);

	length(a,b,c);

	return 0;
}

Point input_point(void){
    Point p;
    printf("x座標とy座標 : ");
	scanf("%lf%lf", &(p.x),&(p.y));
	return p;
}

void output_point(Point a){
	printf("(%.2f,%.2f)\n", a.x, a.y);
	}

void length(Point a,Point b,Point c){
    double ab,bc,ac;
 	ab = sqrt((b.x - a.x)*(b.x-a.x) +(b.y - a.y)*(b.y-a.y));
 	bc = sqrt((c.x - b.x)*(c.x-b.x) +(c.y - b.y)*(c.y-b.y));
 	ac = sqrt((a.x - c.x)*(a.x-c.x) +(a.y - c.y)*(a.y-c.y));
	//ab= sqrt((a.x-b.x)+(a.y-b.y));
	//bc= sqrt((b.x-c.x)+(b.y-c.y));
	//ac= sqrt((a.x-c.x)+(a.y-c.y));

	printf("abの長さ：%.4lf\n",ab);
	printf("bcの長さ：%.4lf\n",bc);
	printf("acの長さ：%.4lf\n",ac);
	judge(ab,bc,ac);
}

void judge(double ab,double bc,double ac){
	if(ab+bc>ac && ab+ac>bc && bc+ac>ab){
		if(fabs(ab-bc)<ESP&&fabs(bc-ac)<ESP){	//fabsで絶対値を取る
				printf("正三角形\n");
		}else if(fabs(ac*ac-(ab*ab+bc*bc))<ESP||fabs(ab*ab-(bc*bc+ac*ac))<ESP||fabs(bc*bc-(ab*ab+ac*ac))<ESP){
				if(fabs(ab-bc)<ESP||fabs(ab-ac)<ESP||fabs(bc-ac)<ESP){
				printf("直角二等辺三角形\n");
			}else{
				printf("直角三角形\n");
			}
		}
		else if(fabs(ab-bc)<ESP||fabs(ab-ac)<ESP||fabs(bc-ac)<ESP){
			printf("二等辺三角形\n");
		}else{
			printf("その他の三角形\n");
		}
	}else{
	printf("三角形は成立しません\n");
	}
}
