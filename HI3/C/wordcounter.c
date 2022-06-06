  #include<stdio.h>
  #include<stdlib.h>
 
  int main(int argc, char *argv[]){
 
      FILE *fp;
      int ch,wocha,i;
      int lis,wos,chs;
      int li,wo,mojisuu;
 
      if(argc == 1){
          if((fp = fopen(argv[1],"r"))==NULL){
          fprintf(stderr,"Cannot open file\n");
          }
          printf("%3d %3d %3d\n",li,wo,mojisuu);
      }
      else if (argc == 2){
 
          if((fp = fopen(argv[1],"r"))==NULL){
              fprintf(stderr,"Cannot open file\n");
             exit(EXIT_FAILURE);
              }
          while((ch=fgetc(fp))!=EOF){
              mojisuu++;
              if(ch==' '&& wocha!=' '|| ch=='\n')
              wo++;
              if(ch=='\n')
              li++;
              wocha=ch;
          }
      printf("%3d %3d %3d %s\n",li,wo,mojisuu,argv[1]);
          }
          else if(argc >2){
 
 
      for(i=0; i<argc; i++){
              if((fp = fopen(argv[i+1],"r"))==NULL){
                  fprintf(stderr,"Cannot open file \n");
                  exit(EXIT_FAILURE);
              }
      }
      for(i=0; i<argc; i++){
          li=0;   wo=0;   mojisuu=0;  wocha=0;
      while((ch =fgetc(fp))!=EOF){
          mojisuu++;
          if(ch==' ' && wocha!=' '|| ch=='\n')
          wo++;
          if(ch=='\n')
          li++;
          wocha=ch;
          }
              wos+=wo;    lis+=li;    chs+=mojisuu;
 
              printf("%3d %3d %3d %s\n",li,wo,mojisuu,argv[i+1]);
      }
      printf("%3d %3d %3d %s\n",lis,wos,chs);
      }else{
          printf("引数の数が一致しません");
      }
      fclose(fp);
          return 0;
  }
