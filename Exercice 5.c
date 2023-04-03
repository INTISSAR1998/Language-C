#include <stdio.h>
#include <ctype.h>
void main ()
{char t[50];
 int i,n,j,c,aux;
 printf("donner la taille du tableau");
 scanf ("%d",&n);
 for(i=0;i<n;i++){
        do {printf("donner t["%i"]",i);
      scanf("%c",&t[i]);}
 while (!isalpha(t[i]));}
 for(i=0;i<n;i++){
 	for(j=i+1;j<n;j++)
 		{if (t[j]==t[i]);}
 	    for(c=j;c<n;c++)
 	    	{aux=t[c];
 	    		t[c]=t[c+1];
 	    		t[c+1]=aux;}
 n--;
 j--;}

}
