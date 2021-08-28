//Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. Sua
//assinatura deve ser: void troca(float *a, float *b).

#include<stdio.h>

void troca(float *a, float *b){
	float x; // declarando variavel auxiliar para troca de valores
	x = *a; // passando o valor de a para x
	*a = *b; // passando o valor de b para a 
	*b = x; // passando o antigo valor de a (que esta em x) para b.
}

int main(){
	
	float *a, *b, x, y; //declarando as variaveis e os ponteiros tipo float
	
	printf("\nInforme o valor x: ");
	scanf("%f",&x);//recebendo o valor de x
	a = &x; // atribuindo o ponteiro para x
	
	printf("\nInforme o valor y: ");
	scanf("%f",&y);// recebendo o valor de y
	b = &y; //atribuindo o ponteiro para y
	
	printf("\n x = %2.f\ty = %2.f",x,y); // printando o valor antes da troca
	
	troca(a, b); // chamando a função
	
	printf("\n x = %f2.\ty = %2.f",x,y); // printando os valores trocados
}
