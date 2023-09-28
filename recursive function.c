#include <stdio.h>
int sum( int a)
{
    if( a%2==0 ){
        printf("continue");
    }
    else{
        printf("byee byee");
    }
}
int main()
{ int a;
    printf("value of a");
    scanf("%d",&a);
    printf("%d\n",sum(a));
}
