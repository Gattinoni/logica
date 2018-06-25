#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Rafael Leme */

/* "Elabore um programa que receba 10 anos de nascimento e ao final
diga quanto anos em média todos os indivíduos tem." */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int d, a[10], i;
	float m;
	printf ("Insira o ano atual: ");
	scanf ("%d", &d);
	printf ("Insira 10 datas de nascimentos (anos):\n");
	for (i = 0; i < 10; i++) {
		scanf ("%d", &a[i]);
		m=m+a[i];
	}
	m=d-m/10;
	printf("Média de idade dos indivíduos: %.2f", m);
	return 0;
}
