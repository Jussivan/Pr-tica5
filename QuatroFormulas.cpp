#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, c, form1, form2, form3, form4;
	printf("Programa que lê as variáveis a, b e c e imprime os valores das quatro fórmulas: \n");
	printf("O primeiro número é:");
	scanf("%f", &a);
	printf("O segundo número é:");
	scanf("%f", &b);
	printf("O terceiro número é:");
	scanf("%f", &c);
	form1 = (a*b)/c;
	form2 = (a*a)+b+5*c;
	form3 = a*b*c+b+c/3*5-1;
	form4 = ((a*b*c)*(a*b*c)*(a*b*c))/2;
	printf("O valor da Fórmula 1 é: %.2f \n", form1);
	printf("O valor da Fórmula 2 é: %.2f \n", form2);
	printf("O valor da Fórmula 3 é: %.2f \n", form3);
	printf("O valor da Fórmula 4 é: %.2f \n", form4);
	return 0;
}
