#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float peso, alt, imc;
	printf("Programa que calcula o IMC:\n");
	printf("O peso �:");
	scanf("%f", &peso);
	printf("A altura �:");
	scanf("%f", &alt);
	imc = peso / (alt*alt);
	printf("O IMC � igual a: %.2f", imc);
	return 0;
}
