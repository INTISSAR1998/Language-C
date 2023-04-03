#include<stdio.h>
void main()
{
int A[50];
int B[50];
int n,i,nb;

do{
    printf("donner la taille du tableau");
    scanf("%d",&n);}
while ((n<=0)||(n>50));

for(i=0;i<n;i++){
 printf("donner A[%d]",i);
 scanf("%d",&A[i]);}

 for(i=0;i<n;i++){
 printf("donner B[%d]",i);
 scanf("%d",&B[i]);}

nb=0;
for(i=0;i<n;i++){
    if (A[i]==B[i])
    {nb=nb+1;}}

printf("le nombre de entiers communs en A et B est %d",nb);
}
