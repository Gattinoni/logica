#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int va[100],vb[100],vc[100], n, i;
	printf("Quantia de n�meros a serem guardados nos vetores:  ");
	scanf("%d", &n);
	printf("\nInsira os n�meros do vetor 'A' abaixo \n");
	for (i = 0; i < n; i++) {
		printf("�ndice %d: ", i+1);
		scanf("%d", &va[i]);
	}
	printf("\nInsira os n�meros do vetor 'B' abaixo \n");
	for (i = 0; i < n; i++) {
		printf("�ndice %d: ", i+1);
		scanf("%d", &vb[i]);
	}
	for (i = 0; i < n; i++){
		vc[i]=va[i];
		va[i]=vb[i];
		vb[i]=vc[i];
	}
	printf("\nN�meros do vetor A:\n");
	for (i = 0; i < n; i++) {
		printf("%d� n�mero do vetor = %d\n", i+1, va[i]);
	}
	printf("\nN�meros do vetor B:\n");
	for (i = 0; i < n; i++) {
		printf("%d� n�mero do vetor = %d\n", i+1, vb[i]);
	}
	return 0;
}
