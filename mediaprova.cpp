#include <stdio.h>

typedef struct{
double notaP1;
double notaP2;
double notaP3;
}Aluno;
 void imprimeAluno (Aluno a){
 	double media = (a.notaP1+a.notaP2+a.notaP3)/3.0;
 	printf ("%.2f\n\n", media);
 	}
 	int main (){
 		Aluno Turma [30],a;
 		Turma [10].notaP1= 9.0;
 		Turma [10].notaP2= 5.0;
 		Turma [10].notaP3= 5.0;
 		a=Turma[10];
 		a.notaP3=7.0;
 		imprimeAluno(a);
	 }
