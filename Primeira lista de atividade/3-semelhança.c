#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int va[100],vb[100],vc[100], n, i, s;
	float p;
	printf("Quantia de números a serem guardados nos vetores:  ");
	scanf("%d", &n);
	printf("\nInsira os números do vetor 'A' abaixo \n");
	for (i = 0; i < n; i++) {
		printf("Índice %d: ", i+1);
		scanf("%d", &va[i]);
	}
	printf("\nInsira os números do vetor 'B' abaixo \n");
	for (i = 0; i < n; i++) {
		printf("Índice %d: ", i+1);
		scanf("%d", &vb[i]);
	}
	s=0;
	printf("\n");
	for (i = 0; i < n; i++) {
		if (va[i] == vb[i]) {
			s++;
			vc[s]=i+1;
		}
	}
	if (s==n) {
		printf("Vetores A e B são idênticos.");
		}
	else{
		if (s!=0 && s!=1) {
			printf("Os índices %d", vc[1]);
			for (i = 2; i < s; i++) {
				printf(", %d", vc[i]);
			}
			printf(" e %d dos vetores A e B têm valores idênticos.", vc[i]);
		}
		if (s==1){
			printf("\nOs valores do índice %d dos vetores A e B são idênticos.", vc[1]);
		}
		p=(s*100)/n;
		if (s==0){
			printf("\nOs vetores são completamente diferentes.");
		}
		else {
			printf("\nOs vetores são %.2f%% semelhantes.",p);
		}
	}
	return 0;
}
