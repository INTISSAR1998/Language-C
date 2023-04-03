#include<stdio.h>
#include <math.h>
void main()
{float delta,a,b,c,x1,x2;
    printf("donner les  coefficients");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a!=0){
            delta=b*b-4*a*c;
        if (delta<0){ printf("pas de solution");}
           else if( delta > 0){
                x1=-b-sqrt(delta)/(2*a);
                x2=-b+sqrt(delta)/(2*a);
                   printf("x1=%f x2=%f",x1,x2);            }
            else{
                                x1=-b/(2*a);
                                printf("x1=%f",x1);
            }
             }
    if(a==0){if (b==0){printf("pas de solution");}
             else if(b!=0){
                          x1=-c/a;
                          printf("la solution est x1=%f",x1);
                          }

            }
}
