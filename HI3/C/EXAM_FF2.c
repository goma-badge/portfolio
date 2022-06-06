#include<stdio.h>
#include<stdlib.h>

#define MAX_y 100
#define N 100

typedef struct ghgtype{
	int year;
	double CO2;
	double CH4;
	double N2O;
	double Fgase;
}GHGtype;


void output(GHGtype [],int);
void add_data(GHGtype [],int);

int main(void){

	FILE *fp;
	GHGtype data[MAX_y];
	int n;

	if((fp=fopen("GHGdata","rb"))==NULL){
		printf("Cannot open file: GHGdata.\n");
		exit(1);
	}
	n=fread(data,sizeof(GHGtype),MAX_y,fp);

	add_data(data,n);
	output(data,n);

	fclose(fp);
	return 0;
}


void output(GHGtype data[],int n){
	int i;

	printf("| Year |  CO2   |  CH4  |  N2O  |  F-gases  |\n");
	printf("----------------------------------------------\n");
	for(i=0;i<n; i++){
		printf("| %d | %.1lf |  %.1lf |  %.1lf |   %.1lf    |\n",2000+i,data[i].CO2, data[i].CH4, data[i].N2O, data[i].Fgase);
	}
	printf("----------------------------------------------\n");
}

void add_data(GHGtype data[],int *n){
    GHGtype tmp;
    int num;

    printf("\nデータを入力してください(終了:^d)\n");
	printf("name height weight\n");

	while(scanf("%.1lf,%.1lf,%.1lf,%1.lf",&tmp.CO2, &tmp.CH4,&tmp.N2O,&tmp.Fgase)!=EOF){
		num =(*n)+1;
		tmp.year = num;
		if(*n >=N)
		break;

		data[*n] = tmp;
		(*n)++;
	}
	output(data, *n);
}