#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int v[20], n, i, p, r;
	r=0;
	printf("\nInsira uma sequ�ncia de 20 n�meros \n");
	for (i = 0; i < 20; i++) {
		printf("Indice %d: ", i);
		scanf("%d", &v[i]);
	}
	printf("\nInsira um n�mero da sequ�ncia para saber o seu �ndice no vetor.  \n");
	for (;;) {
		printf("\nN�mero: ");
		scanf("%d", &p);
		for (i = 0; i < 20; i++) {
			if (v[i]==p) {
			printf("Seu �ndice: %d \n", i);
			}
			else {
				r++;
			}
		}
		if (r==20){
			printf("Valor n�o encontrado.\n");
		}
			r=0;
	}
	return 0;
}
