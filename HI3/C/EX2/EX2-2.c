#include<stdio.h>
#define N 50
int main(void){
    int c,i;
    int couM=0;
    int couF=0;
    char gen[N];
    double hei[N],wei[N],HaveM=0,HaveF=0,WaveM=0,WaveF=0;
    printf("クラスの人数を入力してください:");
    scanf("%d",&c);
	if(c==0){
		printf("誰も入力されていません\n");
		return 0;
	}
	printf("%d\n性別 身長 体重の順で入力\n",c);
	for(i=0;i<c;i++){
		scanf(" %c %lf %lf",&gen[i],&hei[i],&wei[i]);
		if(gen[i]=='M'){
			HaveM=HaveM+hei[i];
			WaveM=WaveM+wei[i];
			couM++;
		}
		if(gen[i]=='F'){
			HaveF=HaveF+hei[i];
			WaveF=WaveF+wei[i];
			couF++;
		}
	}
	printf("-----------------------\n|性別|  身長  |  体重  |\n-----------------------\n");
	for(i=0;i<c;i++){
		printf("|%3c |%7.2f |%7.2f |\n",gen[i],hei[i],wei[i]);
	}
	printf("-----------------------\n");
	printf("平均身長と平均体重\n-----------------------\n|性別|  身長  |  体重  |\n-----------------------\n");
	if(couM==0&&couF==0){
		printf("誰も入力されていません\n");
		return 0;
	}
	if(couF==0){
		printf("|男性|%7.2f |%7.2f |\n",HaveM/couM,WaveM/couM);
		printf("|女性|なし|\n");
		return 0;
	}
	if(couM==0){
		printf("|男性|なし|\n");
		printf("|女性|%7.2f |%7.2f |\n",HaveF/couF,WaveF/couF);
		return 0;
	}
	else{
		printf("|男性|%7.2f |%7.2f |\n",HaveM/couM,WaveM/couM);
		printf("|女性|%7.2f |%7.2f |\n",HaveF/couF,WaveF/couF);
		return 0;
	}
	return 0;
}