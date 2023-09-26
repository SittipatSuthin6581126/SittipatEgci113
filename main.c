#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /* double num,sqr_num;
     printf("enter nmnber  ");
     scanf("%lf",&num);
     sqr_num=sqrt(num);
     printf("Square root of %.2lf is =%.2lf",num,sqr_num);
*/




 int a,b,c;
 float x1,x2;

 printf("insert input a,b,c:");
 scanf("%d,%d,%d",&a,&b,&c);


 x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
 x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);

 printf("\n x1=%.2f",x1);
  printf("\n x2=%.2f",x2);
 //(a*pow(x1,2)) + (b*x1) +c;


return 0;
}
