#include <stdio.h>
#define NMAX 10
main ()
{ int i, j;
/*affichage ligne en-tête */
printf("\tI");
for (j=1;j<=NMAX;j++) printf ("%4d",j);
printf("\n");
for(j=1;j<=NMAX;j++) printf("_ _ _ _ _");
printf ("\n");
/* affichage des différentes lignes */
for(i=1;i<=NMAX;i++)
{printf ("%4d\tI",i);
for (j=1;j<=NMAX; j++)
printf("%4d",i*j);
printf("\n");
}
}
