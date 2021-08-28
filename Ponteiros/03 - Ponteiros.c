//Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
//apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
//valor lido.

#include<stdio.h>

int main(){
	int v[5], i; //declarando as variaveis
	
	for(i=0;i<5;i++){ 
	printf("\nInforme o valor do elemento v%d: ", i+1);
	scanf("%d",v+i);// recebendo os valores do vetor
	}
		for(i=0;i<5;i++){
		printf("%d\n", *(v+i));// printando o vetor recebido na tela
		
	}
	
	printf("\nDOBRO\n");
	
	for(i=0;i<5;i++){ // printando os valores dobrado na tela 
		printf("%d\n", *(v+i)*2); // multiplicando cada valor por 2
// nesse caso, declaramos um vetor desa forma pelo fato dele ser um ponteiro que guarda a posição
//do primeiro elemento do vetor, então se colocarmos v+i, estaremos passando pelas posições seguintes
//e dessa forma, percorrendo todo o vetor.
	}
		
}

