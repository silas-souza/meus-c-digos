#include<stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
 int valor[10], i, soma=0;

 for(i=0; i<10; i++)
 {
 printf("\ndigite um valor num�rico\n ");
 scanf("%d", &valor[i]);
 if(valor[i]%2==0)
 soma=soma+valor[i];
 }

 printf("A soma dos n�meros pares �: %d", soma);

 
}

