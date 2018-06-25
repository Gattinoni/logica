#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Rafael Leme */

/* "Crie um programa que receba 10 preços de itens de uma compra, ao
término some de modo a ter um total da compra, feito isso, receba a
quantidade paga pelo usuário e exiba um alerta caso falte dinheiro, ou a
quantidade de troco a ser devolvida caso haja troco(em caso de valor
igual exibir 0)." */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i, q;
	float v[100], p, t;
	printf ("Insira a quantia de itens da compra: ");
	scanf ("%d", &q);
	printf ("Insira os preços dos produtos (R$):\n");
	for (i = 0; i < q; i++) {
		printf ("	Valor do %dº item: ", i+1);
		scanf ("%f", &v[i]);
		t=t+v[i];
	}
	printf ("Custo total dos %d itens: R$ %.2f\n", q, t);
	printf ("Insira o valor pago pelo cliente: ");
	scanf ("%f", &p);
	if (p < t) {
		printf ("\nFALTAM: R$ %.2f", t-p);
	}
	if (p > t) {
		printf ("\nSOBRAM: R$ %.2f", p-t);
	}
	if (p == t) {
		printf ("Valor equivalente!");
	}
	return 0;
}
