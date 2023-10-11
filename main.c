#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{



 int a,b,c;
 float x1,x2;

 printf("insert input a,b,c:");
 scanf("%d,%d,%d",&a,&b,&c);

 //ax^2+bx+c;

 switch (a){
    case 1: printf("x^2"); break;
    case 0: break;
    case -1: printf("-x^2"); break;
    default: printf("%dx^2",a);
 }
if (b!=0 && b>0)printf("+");
 switch (b){
    case 0: break;
    case 1: printf("x"); break;
    case -1: printf("-x"); break;
    default: printf("%dx",b);
    }
if((a!=0 || b!=0)&&c>0)printf("+");
 if (c!=0) printf("%d\n",c);




    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);





  float sq=b*b-4*a*c;

    if (a==0){
        if(b!=0)
            printf("\nthe answer = %.2f",-(float)c/b);
            else puts("no solution");
    }

    else if(sq==0) printf("One real solution = %.2f",(float)-b/(2*a));
            else if(sq<0)puts("no real solution");
                else {
                    printf("Two real solutions:\n");
                    printf("x1 = %.2f\n", (-b + sqrt(sq)) / (2 * a));
                    printf("x2 = %.2f\n", (-b - sqrt(sq)) / (2 * a));
        }





  return 0;

  }





 //ax^2+bx+c









