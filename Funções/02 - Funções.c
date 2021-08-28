#include<stdio.h>
//Faça um programa em C para ler um valor inteiro positivo x digitado pelo
//usuário e apresentar na tela os número de 0 (zero) até x. Crie uma função
//para gerar os números do intervalo e mostrar os valores na saída
void v(int n1){

	for(int i=0;i<=n1;i++)
	{
		printf("%d ",i);
	}

}

int main(){
	
	int a, num;
	
	printf("digite o valor:");
	scanf("%d",&a);
	
	v(a);
	
}
