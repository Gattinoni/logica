#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Rafael Leme */

/* "Elabore um programa que receba um gabarito de 20 questões, de
depois receba 10 resultados de provas(contendo 20 questões) e teste
contra este gabarito, ao término de cada preenchimento exibir a
quantidade de erros e acertos e diga se o indivíduo foi aprovado ou
não(levando em conta que o mínimo para ser aprovado são 10
acertos.), após receber todas as respostas o sistema deve exibir a
média de erros e acertos." 
Eu preferi fazer o código substituindo os números de alunos e questões para variáveis, pq com esses números aí fica uma bosta pra testar o código. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c[100], nalunos, nquestoes;
	float nota, acertos, erros;
	char resposta[100][100], gabarito[100];
	acertos=0;
	printf ("Número de alunos: ");
	scanf ("%d", &nalunos);
	printf ("Número de questões: ");
	scanf ("%d", &nquestoes);
	printf ("\nPreencha o gabarito\n");
	for (b = 0; b < nquestoes; b++) {
		printf ("%dª questão: ", b+1);
		scanf (" %c", &gabarito[b]);
	}
	for (a = 0; a < nalunos; a++) {
		c[a]=0;
		printf ("\nPreencha as respotas do %dº aluno\n", a+1);
		for (b = 0; b < nquestoes; b++) {
			printf ("%dª questão: ", b+1);
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
	printf ("\nMédia de acertos: %.2f", acertos/nalunos);
	printf ("\nMédia de erros: %.2f", erros/nalunos);
	
	return 0;
}
