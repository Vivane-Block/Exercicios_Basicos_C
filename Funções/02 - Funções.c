#include<stdio.h>
//Fa�a um programa em C para ler um valor inteiro positivo x digitado pelo
//usu�rio e apresentar na tela os n�mero de 0 (zero) at� x. Crie uma fun��o
//para gerar os n�meros do intervalo e mostrar os valores na sa�da
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
