#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{ char frase[150];
  int i, tot=0;
  
  printf("Insira a frase:");
  gets(frase);
  for(i=0;i<strlen(frase);i++)
  if(isdigit(frase[i]))
    tot++;
  printf("\n%d digitos em %s\n",tot,frase);
    
    
    system("Pause");
    return 0;
}
