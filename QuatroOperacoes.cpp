#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, soma, sub, mult, div;
	printf("Programa que calcula as 4 opera��es b�sicas entre 2 n�meros reais: \n");
	printf("O primeiro n�mero �:");
	scanf("%f", &n1);
	printf("O segundo n�mero �:");
	scanf("%f", &n2);
	soma = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	printf("O valor da Soma �: %.2f \n", soma);
	printf("O valor da Subtra��o �: %.2f \n", sub);
	printf("O valor da Multiplica��o: %.2f \n", mult);
	printf("O valor da Divis�o: %.2f \n", div);
	return 0;
}
