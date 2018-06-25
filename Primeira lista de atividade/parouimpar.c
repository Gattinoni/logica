#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int v[20],vpar[20],vimpar[20], par, impar, i;
	par = 0;
	impar = 0;
	printf("Digite abaixo uma sequência de 20 números: \n");
	for(i = 0; i < 20; i++) {
		scanf("%d", &v[i]);
	}
	for(i = 0; i < 20; i++) {
		if(v[i] % 2 == 0) {
			vpar[par] = v[i];	
			par++;
		}
		else {
			vimpar[impar] = v[i];
			impar++;
		}
	}
	printf("\n Números pares: \n");
	for(i = 0; i < par; i++) {
		printf(" %d \n", vpar[i]);
	}
	printf("\n Números ímpares: \n");
	for(i = 0; i < impar; i++) {
		printf(" %d \n", vimpar[i]);
	}
	
	return 0;
}
