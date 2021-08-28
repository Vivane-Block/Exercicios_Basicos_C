#include<stdio.h>
//Faça um programa em para ler 2 números a e b digitados pelo usuário
//e mostrar o resultado da sua multiplicação (a × b). Crie uma função para
//fazer a multiplicação e fornecer o resultado como seu retorno
int ml(int n1, int n2){
	
	return n1*n2;
}

int main(){
	
	int a, b, valor;
	
	printf("digite o valor 1:");
	scanf("%d",&a);
	printf("digite o valor 2:");
	scanf("%d",&b);
	
	valor = ml(a,b);
	printf("O resultado: %d",valor);
	
	
}
