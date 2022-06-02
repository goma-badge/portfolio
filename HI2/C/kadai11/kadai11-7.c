#include<stdio.h>

struct seiseki{
	char name[20];
	int math;
	int eng;
};
int main(void){
	int i;
	int x=0;

	struct seiseki ps[3];
	printf("「名前　数学の点数　英語の点数」の形式で３個のデータを入力して下さい\n");
	for(i=0;i<3;i++){
	scanf("%s %d %d",ps[i].name,&ps[i].math,&ps[i].eng);
	}
	for(i=0;i<3;i++){
		if(i==0)
			x=ps[i].math;
		if(x<ps[i].math)
			x=ps[i].math;
		}
	printf("数学の最高点:%d\n",x);
	printf("最高点を取った学生:");
	for(i=0;i<3;i++){
		if(x==ps[i].math)
			printf("%s ",ps[i].name);
		}
		printf("\n");
	for(i=0;i<3;i++){
		if(i==0)
			x=ps[i].eng;
		if(i<ps[i].eng)
			x=ps[i].eng;
		}
	
	printf("英語の最高点:%d\n",x);
	printf("最高点をとった学生:");
	for(i=0;i<3;i++){
		if(x==ps[i].eng)
		printf("%s",ps[i].name);
	}
	printf("\n");
	return 0;
}
