#include<stdio.h>
//Fa¸ca um programa para ler uma matriz A e uma matriz B, ambas com
//3 linhas e 3 colunas. Ao final, apresentar a matriz resultante da operação A + B;

int main(){
	
	int A[3][3], B[3][3], R[3][3];
	int i, j;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite o valor da posicao A [%d][%d]:", i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite o valor da posicao B [%d][%d]:", i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("\nSOMA DAS MATRIZES:\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			R[i][j] = A[i][j] + B[i][j];
			printf("%6d",R[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
}
