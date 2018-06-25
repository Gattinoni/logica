#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int v[100], n, i, p, r;
	r=1;
	printf("Quantia de números a serem guardados no vetor:  ");
	scanf("%d", &n);
	printf("\nInsira os numeros abaixo \n");
	for (i = 0; i < n; i++) {
		printf("Indice %d: ", i+1);
		scanf("%d", &v[i]);
	}
	printf("\nInsira o índice numerico para ter seu valor resgatado \n");
	for (;r>0;) {
		printf("Indice: ");
		scanf("%d", &p);
		if (p-1 < n && p!=0) {
			printf("Valor : %d \n \n \n", v[p-1]);
		}
		else {
			printf("Valor não inserido. \n \n \n");
		}
		if (p==0){
			r=0;
		}
	}
	return 0;
}
