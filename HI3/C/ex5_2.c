#include<stdio.h>
int main(int argc, char* argv[])
{
    int i;

    printf("引数の数 argc: %d\n",argc);
    for(i=0; i<argc; i++){
        printf("引数 argv[%d]:%s\n",i,argv[i]);
    }
    return 0;
}