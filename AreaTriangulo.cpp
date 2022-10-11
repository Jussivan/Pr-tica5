#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float base, alt, area;
	printf("Programa que calcula a Área de um Triângulo:\n");
	printf("Valor da Base:");
	scanf("%f", &base);
	printf("Valor da Altura:");
	scanf("%f", &alt);
	area = (base*alt)/2;
	printf("O valor da Área do Triângulo é: %.2f", area);
	return 0;
}
