#include<stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
 int valor[10], i, n_maior , n_menor ; 
 float media;

 for(i=0; i<10; i++)
 {
 printf("\ndigite um valor num�rico\n ");
 scanf("%d", &valor[i]);
 n_maior=valor[i];
 n_menor=valor[i];
 for(i=1; i<10; i++)
 {
 printf("\nEntre com o %do numero inteiro: ",i+1);
 scanf("%i", &valor[i]);
 if(valor[i]>n_maior)
 n_maior=valor[i];
 else
 if(valor[i]<n_menor)
 n_menor=valor[i];
 media=(n_maior + n_menor)/2 ;
}
printf ("\n o n�mero maior � :%d",n_maior);
printf ("\n o n�mero menor � :%d",n_menor);
printf("\n a media entre o maior eo menor n�mero � :%f",media);

 
}
}

