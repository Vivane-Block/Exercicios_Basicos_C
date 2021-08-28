//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
//exiba o maior endereço.

#include<stdio.h>

int main(){
	
	int a, b, *p1, *p2;		//decalrando as variaveis
	
	printf("\nInforme o valor 1: ");
	scanf("%d",&a); 	//recebendo o valor de a
	printf("\nInforme o valor 2: ");
	scanf("%d",&b);		//recebendo o valor de b
	
	p1 = &a;		//atribuindo um ponteiro para a
	
	p2 = &b;		//atribuindo um ponteiro para b
	
	if(*p1>*p2){		//verificando qual é o maior valor
		printf ("\nO valor \n\%d eh o maior",a);
	
	}else{
		printf("\nO valor %d eh o maior\n", b);
	}
}

