#include<stdio.h>
//Faça um programa para ler uma matriz A com 2 linhas e 3 colunas e
//calcular a matriz B com 3 linhas e 2 colunas sendo B = A transposta. Ao final apresentar a matriz A e a matriz B
int main(){
	
	int A[2][3], B[3][2];
	int i, j;
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite o valor da posicao A [%d][%d]:", i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n\nMATRIZ A:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d", A[i][j]);
		}
		
		printf("\n");
	}
	printf("\n\nMATRIZ TRANSPOSTA:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			B[i][j] = A[j][i];
			printf("%6d",B[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
}
