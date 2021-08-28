//Escreva um programa que declare um int, um float e um char, e ponteiros para int, float,
//e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
//usando os ponteiros. Imprima os valores das variáveis antes e após a modificação

#include<stdio.h>


int main(){
	//declarando as variaveis e seus valores
	int i = 4, *pa;
	float j = 2.5, *ps; 
	char p = 'c', *pd;
	
	printf("\nValores originais:\ni = %d\nj = %2.f\np = %c\n", i,j,p);
	//atribuindo ponteiros para cada variavel
	pa = &i;
	ps = &j;
	pd = &p;
	//modificando os valores das variaveis atraves dos ponteiros
	*pa = 5;
	*ps = 4.5;
	*pd = 'k';
	//printando os valores modificados
	printf("\nValores originais:\ni = %d\nj = %2.f\np = %c\n", i,j,p);
	
	
}
