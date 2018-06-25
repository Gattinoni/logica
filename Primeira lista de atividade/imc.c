#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Rafael Leme */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int v1[100], v2[100], vc[100], c, i, menorp, maiorp, n;
	float  va[100], vimc[100], m, maiora, menora, maiorimc, menorimc;
	char nome[20][100], nilton[20][100];
	m=0;
	/*Inserção dos dados dos indivíduos*/
	printf("Número de indivíduos a terem seus IMCs calculados: ");
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		printf("\n%dº indivíduo\n", i+1);
		printf("Nome: ");
		scanf("%s", nome[i]);
		printf("Peso (kg): ");
		scanf("%d", &v1[i]);
		printf("Altura (cm): ");
		scanf("%d", &v2[i]);
		va[i]=v2[i];
		va[i]=va[i]/100;
		vimc[i]=v1[i]/(va[i]*va[i]);
	}
	/*Lista ordenada por ordem de inserção com as definições do IMC*/
	for(i=0;i<n;i++) {
		if(vimc[i]<17) {
			printf("\nIMC de %s: %.2f (muito abaixo do peso)", nome[i], vimc[i]);
		}
		if(vimc[i]>=17 && vimc[i]<18.50) {
			printf("\nIMC de %s: %.2f (abaixo do peso)", nome[i], vimc[i]);
		}
		if(vimc[i]>=18.50 && vimc[i]<25) {
			printf("\nIMC de %s: %.2f (peso normal)", nome[i], vimc[i]);
		}
		if(vimc[i]>=25 && vimc[i]<30) {
			printf("\nIMC de %s: %.2f (acima do peso)", nome[i], vimc[i]);
		}
		if(vimc[i]>=30 && vimc[i]<35) {
			printf("\nIMC de %s: %.2f (obesidade)", nome[i], vimc[i]);
		}
		if(vimc[i]>=35 && vimc[i]<40) {
			printf("\nIMC de %s: %.2f (obesidade severa)", nome[i], vimc[i]);
		}
		if(vimc[i]>=40) {
			printf("\nIMC de %s: %.2f (obesidade mórbida)", nome[i], vimc[i]);
		}
	}
	/*Menor peso*/
	menorp=v1[0];
	c=0;
	for(i=1;i<n;i++) {
		if(v1[i]<menorp) {
			menorp=v1[i];
		}
	}
	vc[0]=1;
	for(i=0;i<n;i++) {
		if(v1[i]==menorp) {
			c++;
			strcpy( nilton[c], nome[i]);
		}
	}
	printf("\n\nMenor peso: %dkg", menorp);
	if(c<1) {
		printf(" (%s)", nome[0]);
	}
	if(c==1) {
		printf(" (%s)", nilton[1]);
	}
	if(c>1) {
		printf(" (%s", nilton[1]);
		if(c>2) {
			for(i=2;i<c;i++) {
				printf(", %s", nilton[i]);
			}
		}
		printf(" e %s)", nilton[c]);
	}
	/*Maior peso*/
	maiorp=v1[0];
	c=0;
	for(i=1;i<n;i++) {
		if(v1[i]>maiorp) {
			maiorp=v1[i];
		}
	}
	vc[0]=1;
	for(i=0;i<n;i++) {
		if(v1[i]==maiorp) {
			c++;
			strcpy( nilton[c], nome[i]);
		}
	}
	printf("\nMaior peso: %dkg", maiorp);
	if(c<1) {
		printf(" (%s)", nome[0]);
	}
	if(c==1) {
		printf(" (%s)", nilton[1]);
	}
	if(c>1) {
		printf(" (%s", nilton[1]);
		if(c>2) {
			for(i=2;i<c;i++) {
				printf(", %s", nilton[i]);
			}
		}
		printf(" e %s)", nilton[c]);
	}
	/*Menor altura*/
	menora=va[0];
	c=0;
	for(i=1;i<n;i++) {
		if(va[i]<menora) {
			menora=va[i];
		}
	}
	vc[0]=1;
	for(i=0;i<n;i++) {
		if(va[i]==menora) {
			c++;
			strcpy( nilton[c], nome[i]);
		}
	}
	printf("\nMenor altura: %.2fm", menora);
	if(c<1) {
		printf(" (%s)", nome[0]);
	}
	if(c==1) {
		printf(" (%s)", nilton[1]);
	}
	if(c>1) {
		printf(" (%s", nilton[1]);
		if(c>2) {
			for(i=2;i<c;i++) {
				printf(", %s", nilton[i]);
			}
		}
		printf(" e %s)", nilton[c]);
	}
	/*Maior altura*/
	maiora=va[0];
	c=0;
	for(i=1;i<n;i++) {
		if(va[i]>maiora) {
			maiora=va[i];
		}
	}
	vc[0]=1;
	for(i=0;i<n;i++) {
		if(va[i]==maiora) {
			c++;
			strcpy( nilton[c], nome[i]);
		}
	}
	printf("\nMaior altura: %.2fm", maiora);
	if(c<1) {
		printf(" (%s)", nome[0]);
	}
	if(c==1) {
		printf(" (%s)", nilton[1]);
	}
	if(c>1) {
		printf(" (%s", nilton[1]);
		if(c>2) {
			for(i=2;i<c;i++) {
				printf(", %s", nilton[i]);
			}
		}
		printf(" e %s)", nilton[c]);
	}
	/*Média de IMC*/	
	for(i=0;i<10;i++) {
		m=vimc[i]+m;
	}
	printf("\nMédia de IMC dos indivíduos: %.2f", m/n);
	if(m/n<17) {
		printf(" (muito abaixo do peso)");
	}
	if(m/n>=17 && (m/n)<18.50) {
		printf(" (abaixo do peso)");
	}
	if(m/n>=18.50 && m/n<25) {
		printf(" (peso normal)");
	}
	if(m/n>=25 && m/n<30) {
		printf(" (acima do peso)");
	}
	if(m/n>=30 && m/n<35) {
		printf(" (obesidade)");
	}
	if(m/n>=35 && m/n<40) {
		printf(" (obesidade severa)");
	}
	if(m/n>=40) {
		printf(" (obesidade mórbida)");
	}
	printf("\n\nT E N H A   U M   B O M   D I A !");
	return 0;
}
