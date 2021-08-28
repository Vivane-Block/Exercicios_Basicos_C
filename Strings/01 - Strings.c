#include<stdio.h>
#include<strings.h>
// Escreva um programa que leia três strings e apresente o tamanho de cada uma.
int main(){
	
	int tamanho, i;
	char palavra[55];
	
	for(i=0;i<3;i++){
		
	printf("Insira uma palavra : ");
	gets(palavra);
	
	tamanho = strlen(palavra);
	
	printf("a palavra %s tem tamanho : %d\n\n",palavra, tamanho);	
		
	}

}
