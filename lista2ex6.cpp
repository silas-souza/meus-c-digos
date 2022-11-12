#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	printf ("\n**************");
	printf ("exercicio arrays********");
	
	void ler_vetor (int v[], int n);
	void diferente(int a[],int b[],int n);
	int a[10],b[10];
            
            printf("\nvetor a\n");
	ler_vetor(a,10);
	printf("vetor b\n");
	ler_vetor(b,10);
	diferente(a,b,10);
	return 0;	
	
	
}

void ler_vetor (int v[],int n){

for (int i= 0; i< n; i++){
	printf("\ndigite um número :");
	scanf("%d",&v[i]);
}

}
void diferente (int a[],int b[],int n){

for (int i=0; i<n; i++){
	for (int j=0; j <n; j++){
		if(a[i] != b[j]){
			
			
			printf("\nelementos diferente nos vetores é : %d",b[j]);
		}
	}
}
}

