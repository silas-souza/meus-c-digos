#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	float  n1,n2,n3,media;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite as 3 notas:\n");
	scanf("%f%f%f",&n1, &n2, &n3);
	media = (n1*2 + n2*4 + n3*6) / (2 + 4 + 6);
	printf("Olá %s!\nSua média ponderada foi:,nome,media);
	
	return 0;
}

	
	




