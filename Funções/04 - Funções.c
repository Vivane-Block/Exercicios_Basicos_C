#include<stdio.h>
//Fa�a um programa em que, continuamente, leia n�meros inteiros desde o zero digitados pelo usu�rio. Ap�s a leitura, o programa deve
//indicar se cada um dos n�meros digitados � par ou impar. Essa verifica��o deve ser feita atrav�s de uma fun��o que recebe como par�metro
//um valor e mostra uma mensagem indicando se ele � par ou �mpar. Para
//encerrar o programa, o usu�rio deve digitar zero (o zero tamb�m deve passar passar pela fun��o).

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
