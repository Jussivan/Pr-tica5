#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float base, alt, area;
	printf("Programa que calcula a �rea de um Tri�ngulo:\n");
	printf("Valor da Base:");
	scanf("%f", &base);
	printf("Valor da Altura:");
	scanf("%f", &alt);
	area = (base*alt)/2;
	printf("O valor da �rea do Tri�ngulo �: %.2f", area);
	return 0;
}
