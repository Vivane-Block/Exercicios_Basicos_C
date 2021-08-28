#include<stdio.h>
//Faça um programa em para ler 3 números a, b e c digitados pelo usuário
//e mostrar o maior valor digitado. Para a verificação, crie uma função que
//recebe como parâmetro as variáveis a, b e c e retorna o maior valor dentre
//os três parâmetros recebidos.

void Valores(int a, int b, int c,int maior){
	
	if(a>b && a>c)
	{
		maior=a;
	}
	if(b>c && b>a)
	{
		maior=b;
	}
	if(c>b && c>a)
	{
		maior=c;
	}
	
	printf("\nO maior valor digitado e: %d", maior);
}


int main(){
	
	int a, b, c, v,d;
	
	printf("\ninforme o valor 1:");
	scanf(" %d", &a);
	printf("\ninforme o valor 2:");
	scanf(" %d", &b);
	printf("\ninforme o valor 3:");
	scanf(" %d", &c);
	
	Valores(a,b,c,d);
}
