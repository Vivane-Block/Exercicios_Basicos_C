#include<stdio.h>
#include<strings.h>
//Escreva um programa em C para ler duas strings e concaten�-las em uma
//terceira string com o uso da fun��o strcat
int main(){
	
	char palavra1[55], palavra2[55];
	
	printf("Insira uma palavra : ");
	gets(palavra1);
	printf("\nInsira uma palavra : ");
	gets(palavra2);
	printf("\n");
	strcat(palavra1,palavra2);
    printf("%s",palavra1);
}
