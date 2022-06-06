#include<stdio.h>
int main(void){
    
    int x[3]={10,20,30};
    int *xp;
    xp=x;
    
    printf("*xp=%d\n",*xp);
    printf("*xp+1=%d\n",*xp+1);
    printf("*(xp+1)=%d\n",*(xp+1));
    printf("*xp++=%d\n",*xp++);
    printf("(*xp++)=%d\n",*(xp++));
    return 0;
}
