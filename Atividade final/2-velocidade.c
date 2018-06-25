#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Rafael Leme */

/* "Elabore um programa que receba uma distância(em km/minutos) a
ser percorrida, e a velocidade de um veiculo em km/minutos e com base
nisso diga quantos minutos o veículo demorará para finalizar o
percurso." */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float d, v, t;
	
	printf ("Distância a ser percorrida (km): ");
	scanf ("%f", &d);
	printf ("Velocidade do veículo (km/minuto): ");
	scanf ("%f", &v);
	t=d/v;
	printf("Tempo percorrido (em minutos): %.2f", t);
	return 0;
}
