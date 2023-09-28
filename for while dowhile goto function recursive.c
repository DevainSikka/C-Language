#include <stdio.h>
int main()
{   int a;
    printf("value of a");
    scanf("%d",&a);
    do{
        printf("continue");
    }while(a>0);
    if(a<0){
        printf("bye bye");
    }

}


