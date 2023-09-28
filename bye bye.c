#include <stdio.h>
#include <string.h>
struct studentinfo{
    char name[20];
    int rollno;
    int a;
    int b;
    int c;
    //a=marks in c language
    //b=marks in c++ language
    //c=marks in java language
};
 int main()
{   int i;
    printf("no. of values you wnt to store ");
    scanf("%d",&i);
    struct studentinfo s[i];
    for(int x=0;x<i;x++){
         printf("\nenter the value of name ");
        scanf("%s",&s[x].name);
         printf("\nenter the value of rollno to store at  %d",x);
        scanf("%d", &s[x].rollno);
         printf("\nenter the marks in c %d ",x);
        scanf("%d", &s[x].a);
         printf("\nenter the marks in c++ %d ",x);
        scanf("%d", &s[x].b);
         printf("\nenter the marks in java %d ",x);
        scanf("%d", &s[x].c);

    }
    int highestinc = s[0].a;
    int highestincss=s[0].b;
    int highestinjava=s[0].c;

//    for(int j=0; j<i; j++){
  //      if(highestinc < s[j].a){
//            highestinc = s[j].a;
  //      }
//         if(highestincss<s[j].b){
  //          highestincss=s[j].b;
//        }
  //      if(highestinjava<s[j].c){
//            highestinjava=s[j].c;
  //      }

 //   }
//    printf("%d\n",highestinc);
  //  printf("%d\n",highestincss);
//    printf("%d\n",highestinjava);
   // int m=s[i].a+s[i].b+s[i].c;
    for(int j=0; j<i; j++){
     double m = s[j].a + s[j].b + s[j].c;

        printf("%lf",m/3);
    }

      return 0;
}


