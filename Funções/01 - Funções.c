#include<stdio.h>
//Fa�a um programa em para ler 2 n�meros a e b digitados pelo usu�rio
//e mostrar o resultado da sua multiplica��o (a � b). Crie uma fun��o para
//fazer a multiplica��o e fornecer o resultado como seu retorno
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
