#include<stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
 int valor[10], i, soma=0 ; 
 float media;

 for(i=0; i<10; i++)
 {
 printf("\ndigite um valor numérico\n ");
 scanf("%d", &valor[i]);
 if(valor[i]%2==1)
 soma=soma+valor[i];
 media=soma/10 ;
 }

 printf("A media dos números impares é: %f", media);

 
}



