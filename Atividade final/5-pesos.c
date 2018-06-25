#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Rafael Leme */

/* "Crie um programa que receba um hist�rico de peso de um indiv�duo
contendo 20 n�meros,ao final diga qual o maior peso, qual o menor
peso e a m�dia de peso." */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i, n;
	float peso[100], maior, menor, media;
	printf ("N�mero de pesos a serem gravados: ");
	scanf ("%d", &n);
	printf ("Insira os n�meros abaixo (kg):\n");
	for (i = 0; i < n; i++) {
		scanf ("%f", &peso[i]);
		media=media+peso[i];
	}
	menor=peso[0];
	maior=peso[0];
	media=media/n;
	for (i = 1; i < n; i++) {
		if (peso[i]<menor) {
			menor=peso[i];
		}
		if (peso[i]>maior) {
			maior=peso[i];
		}
	}
	printf ("\nMenor peso: %.2fkg \nMaior peso: %.2fkg \nM�dia de peso: %.2fkg", menor, maior, media);
	return 0;
}
