#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float min, seg;
	printf("Programa que converte Minutos em Segundos:\n");
	printf("O n�mero de minutos �:");
	scanf("%f", &min);
	seg = min * 60;
	printf("O n�mero de Segundos � igual a: %.2f", seg);
	return 0;
}
