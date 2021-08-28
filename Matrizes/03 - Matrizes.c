#include<stdio.h>
// Fa¸ca um programa para ler uma matriz de 2 linhas e 3 colunas e calcular
//a soma de todos os elementos da matriz.

int main(){
	
	int matriz [2][3];
	int i, j, soma=0;
	

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite o valor da posicao [%d][%d]:", i+1,j+1);
			scanf("%d", &matriz[i][j]);

		}
	}
	
	printf("\nMatriz formada:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			soma = soma + matriz [i][j];
			printf("%4d", matriz[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n");



	printf("A soma dos elementos da matriz e: %d", soma);

}
