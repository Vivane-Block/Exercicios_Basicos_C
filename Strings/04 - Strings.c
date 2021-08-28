#include<stdio.h>
#include<strings.h>
// Escreva um programa que leia uma string s e um caractere c e
//apresente como saída o número de ocorrências de c em s.

int main(){
	
	char p1[55], letra[1];
	int i,t1, contador=0;
	
	printf("Digite uma palavra:");
	gets(p1);
	printf("\nInforme um caractere:");
	gets(letra);
	
	t1 = strlen(p1);
	
	for(i=0;i<t1;i++){
		
		if(p1[i]==letra[0]){
			contador++;
		}

	}

	printf("\nNa palavra %s a letra '%s' aparece %d vezes.",p1,letra,contador);
}
