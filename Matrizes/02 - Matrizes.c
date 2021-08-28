#include<stdio.h>
// Faça um programa para ler uma matriz de 3 linhas e 3 colunas e apresentar a matriz na tela
int main(){
	
	int matriz [3][3];
	int i, j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Digite o valor da posicao [%d][%d]:", i+1,j+1);
			scanf("%d", &matriz[i][j]);

		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d", matriz[i][j]);
		}
		
		printf("\n");
	}
	

}
