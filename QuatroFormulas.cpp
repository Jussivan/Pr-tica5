#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float a, b, c, form1, form2, form3, form4;
	printf("Programa que l� as vari�veis a, b e c e imprime os valores das quatro f�rmulas: \n");
	printf("O primeiro n�mero �:");
	scanf("%f", &a);
	printf("O segundo n�mero �:");
	scanf("%f", &b);
	printf("O terceiro n�mero �:");
	scanf("%f", &c);
	form1 = (a*b)/c;
	form2 = (a*a)+b+5*c;
	form3 = a*b*c+b+c/3*5-1;
	form4 = ((a*b*c)*(a*b*c)*(a*b*c))/2;
	printf("O valor da F�rmula 1 �: %.2f \n", form1);
	printf("O valor da F�rmula 2 �: %.2f \n", form2);
	printf("O valor da F�rmula 3 �: %.2f \n", form3);
	printf("O valor da F�rmula 4 �: %.2f \n", form4);
	return 0;
}
