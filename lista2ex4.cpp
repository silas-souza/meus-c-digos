#include<stdio.h>
int main()
{
 int numero, guarda_maior, guarda_menor;
 int i;
 float media ;

 printf("Entre com o 1o numeros inteiros: ");
 scanf("%i", &numero);

 guarda_maior=numero;
 guarda_menor=numero;

 for(i=1; i<10; i++)
 {
 printf("\nEntre com o %do numero inteiro: ",i+1);
 scanf("%i", &numero);

 if(numero>guarda_maior)
 guarda_maior=numero;
 else
 if(numero<guarda_menor)
 guarda_menor=numero;
 media=(guarda_maior + guarda_menor)/2 ;
}
 printf("\nO menor numero entrado e: %d", guarda_menor);
 printf("\nO maior numero entrado e: %d", guarda_maior);
 printf("\n a media entre o maior eo menor numero e:%f",media);

 
} 
