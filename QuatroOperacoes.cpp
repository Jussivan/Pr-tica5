#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, soma, sub, mult, div;
	printf("Programa que calcula as 4 operações básicas entre 2 números reais: \n");
	printf("O primeiro número é:");
	scanf("%f", &n1);
	printf("O segundo número é:");
	scanf("%f", &n2);
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	printf("O valor da Soma é: %.2f \n", soma);
	printf("O valor da Subtração é: %.2f \n", sub);
	printf("O valor da Multiplicação: %.2f \n", mult);
	printf("O valor da Divisão: %.2f \n", div);
	return 0;
}
