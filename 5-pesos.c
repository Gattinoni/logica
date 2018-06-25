#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Rafael Leme */

/* "Crie um programa que receba um histórico de peso de um indivíduo
contendo 20 números,ao final diga qual o maior peso, qual o menor
peso e a média de peso." */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i, n;
	float peso, maior, menor, media;
	printf ("Número de pesos a serem gravados: ");
	scanf ("%d", &n);
	printf ("Insira os números abaixo (kg):\n");
	maior=0;
	menor=9999;
	for (i = 0; i < n; i++) {
		scanf ("%f", &peso);
		media=media+peso;
		if (peso>maior) {
			maior=peso;
		}
		if (peso<menor) {
			menor=peso;
		}
	}
	media=media/n;

	printf ("\nMenor peso: %.2fkg \nMaior peso: %.2fkg \nMédia de peso: %.2fkg", menor, maior, media);
	return 0;
}
