#include<stdio.h>
void main()
{int tab[50];
int n,i,x,c;
do{
    printf("donner la taille du tableau");
    scanf("%d",&n);}
while ((n<=0)||(n>50));

printf("donner la case n°0");
scanf("%d",&tab[0]);

for(i=0;i<n;i++){
    do{printf ("donner tab[%d]",i);
    scanf("%d",&tab[i]);}
while (tab[i]<tab[i-1]);}
printf("donner l'élement a insérer");
scanf("%d",&x);
c=0;
while(tab[c]<x)
{c++;}//c:indice de la case à remplir x
n++;
for(i=n;i>c;i--){tab[i]=tab[i-1];}
tab[c]=x;
for(i=0;i<n;i++){printf("%i",tab[i]);}

}

