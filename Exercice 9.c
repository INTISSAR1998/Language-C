#include<stdio.h>
#include<ctype.h>
void main()
{
    char t[5][50];
    int i;
    for(i=0;i<5;i++){
        printf("donner une chaine de caractéres");
        gets(t[i]);
    }
    for(i=4;i>0;i--){printf("%s ",t[i]);}
}
