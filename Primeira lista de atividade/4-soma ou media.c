#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int v[20], n, i, o, t;
	float s, m;
	s=0;
	t=0;
	m=0;
	printf("\nInsira uma sequência de 20 números \n");
	for (i = 0; i < 20; i++) {
		printf("%dº número: ", i+1);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < 20; i++) {
		s=s+v[i];
	}
	m=(s/20);
	printf("\nCalcular: ");
	for (;t<2;){
		printf("\n[1] - Soma	[2] - Média\n");
		scanf("%d", &o);
		if (o==1){
			printf("\nA soma dos números é: %.f\n",s);
			t++;
		}
		if (o==2){
			printf("\nA média dos números é: %.2f\n", m);
			t++;
		}
		if (o!=1 && o!=2) {
			printf("\nOpção inválida.\n");
		}
	}
	return 0;
}
