#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int dinheiro, cafe, troco;
	printf("Programa que l� a quantidade de dinheiro que o cliente colocou na m�quina (sempre um m�ltiplo de 5) e imprime quanto o cliente ir� perder no troco:\n");
	printf("O valor que o cliente colocou na m�quina (m�ltiplo de 5):");
	scanf("%d", &dinheiro);
	cafe = dinheiro/7;
	troco = dinheiro%7;
	printf("O cliente comprou %d caf�s e perdeu %d de troco", cafe, troco);
	return 0;
}
