#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	printf ("\n**************");
	printf ("exercicio arrays");
	
	int vetor [10],i ;
	
	for (i=0; i <10; i++){
		printf ("\nEntre com o valor num�rico :");
		scanf ("%d",&vetor[i]);
		
	}
	printf("Dados entrados pelo usu�rio");
	for (i=0; i<10 ; i++)
	printf("\n%d",vetor [i]);
	
	for (i=0; i <10 ; i++){
		if (vetor [i]%2==0)
		printf("\n valor par =>%d", vetor[i]);
		else 
		printf ("\nvalor �mpar =>%d", vetor [i]);
	}
}
