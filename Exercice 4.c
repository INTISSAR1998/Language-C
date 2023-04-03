#include<stdio.h>

void main()
{
    int i,u,d,c;

    for(i=100;i<1000;i++)
    {
        c=i / 100;
        d=(i % 100)/10;
        u=i%10;

        if((c*c*c +d*d*d+u*u*u)==i)
            printf("%d est cubique\n",i);
    }
}
