#include<stdio.h>
int n1, n2, n3, n4, resultado;
int main(){
	printf("Insira o valor 1:\n");
	scanf("%d", &n1);
	printf("Insira o valor 2:\n");
	scanf("%d", &n2);
	printf("Insira o valor 3:\n");
	scanf("%d", &n3);
	printf("Insira o valor 4:\n");
	scanf("%d", &n4);
	
	resultado = (n1+n2+n3+n4)*(n1+n2+n3+n4);
	
	printf("O quadrado da soma dos numeros inseridos e: %d", resultado);
	
}
