#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int va[100],vb[100],vc[100], n, i, s;
	float p;
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
	s=0;
	printf("\n");
	for (i = 0; i < n; i++) {
		if (va[i] == vb[i]) {
			s++;
			vc[s]=i+1;
		}
	}
	if (s==n) {
		printf("Vetores A e B s�o id�nticos.");
		}
	else{
		if (s!=0 && s!=1) {
			printf("Os �ndices %d", vc[1]);
			for (i = 2; i < s; i++) {
				printf(", %d", vc[i]);
			}
			printf(" e %d dos vetores A e B t�m valores id�nticos.", vc[i]);
		}
		if (s==1){
			printf("\nOs valores do �ndice %d dos vetores A e B s�o id�nticos.", vc[1]);
		}
		p=(s*100)/n;
		if (s==0){
			printf("\nOs vetores s�o completamente diferentes.");
		}
		else {
			printf("\nOs vetores s�o %.2f%% semelhantes.",p);
		}
	}
	return 0;
}
