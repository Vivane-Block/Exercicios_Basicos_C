#include<stdio.h>
//Faça um programa em que, continuamente, leia números inteiros desde o zero digitados pelo usuário. Após a leitura, o programa deve
//indicar se cada um dos números digitados é par ou impar. Essa verificação deve ser feita através de uma função que recebe como parâmetro
//um valor e mostra uma mensagem indicando se ele é par ou ímpar. Para
//encerrar o programa, o usuário deve digitar zero (o zero também deve passar passar pela função).

int determine(int n1){
	if(n1%2!=0)
	{
		printf("\n %d -> O numero e impar.\n",n1);
	}else{
		printf("\n %d -> O numero e par\n",n1);
	}
	
}

int main(){
	
	int a;
	
	printf("\nInforme o valor: ");
	scanf("%d", &a);

	determine(a);
	while(a!=0){
	printf("\nInforme o valor: ");
	scanf("%d", &a);
	determine(a);	
	
	}
	
}
