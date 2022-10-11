#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int dinheiro, cafe, troco;
	printf("Programa que lê a quantidade de dinheiro que o cliente colocou na máquina (sempre um múltiplo de 5) e imprime quanto o cliente irá perder no troco:\n");
	printf("O valor que o cliente colocou na máquina (múltiplo de 5):");
	scanf("%d", &dinheiro);
	cafe = dinheiro/7;
	troco = dinheiro%7;
	printf("O cliente comprou %d cafés e perdeu %d de troco", cafe, troco);
	return 0;
}
