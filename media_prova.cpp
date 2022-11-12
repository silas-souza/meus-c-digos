#include <stdio.h>
main ()
{
double n1, n2, n3,media;
printf("Digite a primeira nota: ");
scanf("%f", &n1);
printf ("digite segunda nota: ");
scanf ("%f",&n2);
printf ("digite a terceira nota: ");
scanf ("%f",&n3);
media = (n1*1+ n2*2+ n3*3)/(1+2+3);

if (media>=5){
	printf("aluno aprovado");
	
}
else {
	printf("aluno reprovado");
}
}
