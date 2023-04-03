#include<stdio.h>
void main()
{int tab[50];
int n,p1,p2,i,min,max;
do{
    printf("donner la taille du tableau");
    scanf("%d",&n);}
while ((n<=0)||(n>50));


for(i=0;i<n;i++){
 printf("donner tab[%d]",i);
 scanf("%d",&tab[i]);}


 min=tab[0];
 p1=0;
 for(i=1;i<n;i++){
 if (tab[i]<min)
 {min=tab[i];
 p1=i;}}

 max=tab[0];
 p2=0;
 for(i=1;i<n;i++){
 if (tab[i]>max)
 {max=tab[i];
 p2=i;}}
printf("le min est %d le max est %d\n",min,max);
printf("la position de min est %d la position de max est %d",p1,p2);
}
