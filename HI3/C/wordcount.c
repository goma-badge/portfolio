#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char *argv[]){
	FILE *fp;
	int ch,fl,i,moji=0,gyo=0,tango=0,smoji=0,sgyo=0,stango=0;

	if(argc==1){
	fp=stdin;

		while((ch=fgetc(fp))!=EOF){
			moji++;
			if(ch=='\n'){
				gyo++;
			}
			if(!isspace(ch)){
				fl=1;
			}
			if(isspace(ch)&&fl){
				tango++;
				fl=0;
			}
		}
	printf("文字数:%d 単語数:%d　行数:%d\n",moji,tango,gyo);
	}else if(argc==2){
		if((fp=fopen(argv[1],"r"))==NULL){
			fprintf(stderr,"Cannot open file\n");
			exit(EXIT_FAILURE);
		}
		while((ch=fgetc(fp))!=EOF){
			moji++;
			if(ch=='\n'){
				gyo++;
			}
			if(!isspace(ch)){
				fl=1;
			}
			if(isspace(ch)&&fl){
				tango++;
				fl=0;
			}
		}
	printf("文字数:%d 単語数:%d 行数:%d %s\n",moji,tango,gyo,argv[1]);

	fclose(fp);
	}else if(argc>2){
		for(i=1; i<argc; i++){
			if((fp=fopen(argv[i],"r"))==NULL){
				fprintf(stderr,"Cannot open file\n");
				exit(EXIT_FAILURE);
			}
			moji=0,gyo=0,tango=0;
			while((ch=fgetc(fp))!=EOF){
				moji++;
				if(ch=='\n'){
					gyo++;
				}
				if(!isspace(ch)){
					fl=1;
				}
				if(isspace(ch)&&fl){
					tango++;
					fl=0;
				}
			}
			smoji+=moji;
			sgyo+=gyo;
			stango+=tango;

			printf("文字数:%d 単語数:%d 行数:%d %s\n",moji,tango,gyo,argv[i]);
		}
		printf("文字数:%d 単語数:%d 行数:%d 合計\n",smoji,stango,sgyo);

		fclose(fp);
		printf("");
	}

	return 0;
}


