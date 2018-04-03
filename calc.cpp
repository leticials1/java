#include<stdio.h>

int calculadora ()
{   
    int menu;
	printf("Calculadora\n\n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("0 - Sair\n\n");
	printf("Escolha uma opcao no menu:");
	scanf("%d", &menu);
	
	switch (menu)
	{
		case 0: 
		return 0;
		break;
		case 1: 
		return menu;
		break;
		case 2: 
		return menu;
		break;
				
		default: 
				printf("\nOpcao invalida! Digite novamente!\n");
				
				calculadora();	
	}
	
}

float soma(float a, float b)
{
	float resultado;	
	resultado=(a+b);
	return resultado;	
}

float subtracao (float c, float d)
{
	float resultado;
	resultado=(c-d);
	return resultado;	
}

int main ()
{ 	
	int main;
	float a, b, c, d, r;

 	main=calculadora();
 		
 	switch (main)
	{
		case 0:
		return 0;
		case 1: 
				printf("\nOperacao Soma\n\n");
				
				printf("\nEntre com o valor 1:");
			    	scanf("%f", &a);
			    
				printf("\nEntre com o valor 2:");
			    	scanf("%f", &b);
				
				r=soma(a,b);
				
				printf("\nO resultado e:%f\n", r);
				
				break;
		
		case 2:	
		                printf("\nOperacao Subtracao\n\n");
				
				printf("\nEntre com o valor 1:");
			    	scanf("%f", &c);
			    
				printf("\nEntre com o valor 2:");
			    	scanf("%f", &d);
				
				r=subtracao(c,d);
				
				printf("\nO resultado e:%f\n", r);
				
				break;

 	}
    
  	return 0;
}
