#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Rafael Leme */

/* "Elabore um programa que receba um gabarito de 20 quest�es, de
depois receba 10 resultados de provas(contendo 20 quest�es) e teste
contra este gabarito, ao t�rmino de cada preenchimento exibir a
quantidade de erros e acertos e diga se o indiv�duo foi aprovado ou
n�o(levando em conta que o m�nimo para ser aprovado s�o 10
acertos.), ap�s receber todas as respostas o sistema deve exibir a
m�dia de erros e acertos." 
Eu preferi fazer o c�digo substituindo os n�meros de alunos e quest�es para vari�veis, pq com esses n�meros a� fica uma bosta pra testar o c�digo. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c[100], nalunos, nquestoes;
	float nota, acertos, erros;
	char resposta[100][100], gabarito[100];
	acertos=0;
	printf ("N�mero de alunos: ");
	scanf ("%d", &nalunos);
	printf ("N�mero de quest�es: ");
	scanf ("%d", &nquestoes);
	printf ("\nPreencha o gabarito\n");
	for (b = 0; b < nquestoes; b++) {
		printf ("%d� quest�o: ", b+1);
		scanf (" %c", &gabarito[b]);
	}
	for (a = 0; a < nalunos; a++) {
		c[a]=0;
		printf ("\nPreencha as respotas do %d� aluno\n", a+1);
		for (b = 0; b < nquestoes; b++) {
			printf ("%d� quest�o: ", b+1);
			scanf (" %c", &resposta[a][b]);
			if (resposta[a][b]==gabarito[b]) {
				c[a]++;
			}
		}
		nota=(c[a]*10)/nquestoes;
		printf ("Nota do aluno: %.2f", nota, nquestoes);
		if (nota>=5) {
			printf (" (APROVADO).\n");
		}
		else {
			printf (" (REPROVADO).\n");
		}
	}
	for (a = 0; a < nalunos; a++) {
		acertos=acertos+c[a];
		erros=erros+nquestoes-c[a];
	}
	printf ("\nM�dia de acertos: %.2f", acertos/nalunos);
	printf ("\nM�dia de erros: %.2f", erros/nalunos);
	
	return 0;
}
