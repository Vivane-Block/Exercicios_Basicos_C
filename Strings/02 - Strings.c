#include<stdio.h>
#include<strings.h>
// Escreva um programa que leia três strings e verifique se duas ou
//mais strings possuem o mesmo valor.

int main(){
	
	char palavra1[55], palavra2[55], palavra3[55];
	int valor, valor2,valor3;
	
	printf("Insira uma palavra : ");
	gets(palavra1);
	
	printf("Insira uma palavra : ");
	gets(palavra2);
	
	printf("Insira uma palavra : ");
	gets(palavra3);
	
	valor = strcmp(palavra1,palavra2);
	valor2 = strcmp(palavra2,palavra3);
	valor3 = strcmp(palavra1,palavra3);
	
	if(valor == valor2 && valor2 == valor3){
		printf("\nTodas as palavras sao iguais\n");
	}else if(valor == 0){
		printf("\nAs palavras 1 e 2 sao iguais\n ");
	}else if(valor2 == 0){
		printf("\nAs palavras 2 e 3 sao iguais\n ");
	}else if(valor3 == 0){
		printf("\nAs palavras 1 e 3 sao iguais\n ");
	}else if(valor != valor2 && valor2 != valor3 && valor3 != valor){
		printf("\nTodas as palavras sao diferentes\n");
	}
}
