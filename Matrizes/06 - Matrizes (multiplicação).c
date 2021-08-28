#include<stdio.h>
//Fa�a um programa para ler duas matrizes A e B de tamanho (n�mero de
//linhas e colunas) definido pelo usu�rio e calcule a matriz C = A � B. Se
//a multiplica��o n�o for poss�vel o programa dever� informar ao usu�rio
//antes de ler o conte�do das matrizes.

int main(){
	
	int i,j, la, lb, ca, cb, a;
	int A[50][50], B[50][50], C[50][50];
	
	printf("Informe o numero de linhas da matriz A :");
	scanf("%d",&la);
	printf("Informe o numero de colunas da matriz A :");
	scanf("%d",&ca);
	printf("Informe o numero de linhas da matriz B :");
	scanf("%d",&lb);
	printf("Informe o numero de colunas da matriz B :");
	scanf("%d",&cb);
	
	if(ca!=lb){
		printf("A multiplicacao das matrizes nao pode ser feita.");
	}else{
		
	for(i=0;i<la;i++)
	{
		for(j=0;j<ca;j++)
		{
			printf("Digite o valor da posicao A [%d][%d]:", i,j);
			scanf("%d",&A[i][j]);
		}
	}	
	
	for(i=0;i<lb;i++)
	{
		for(j=0;j<cb;j++)
		{
			printf("Digite o valor da posicao B [%d][%d] :",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0;i<la;i++)
	{
		for(j=0;j<cb;j++)
		{
			C[i][j] =0;
			for(a=0;a<ca;a++)
			{ 
				C[i][j] = C[i][j]+A[i][a]*B[a][j];			
			}
			printf("%4d", C[i][j]);
			
		}
		printf("\n");
	}
	
		
	}
	
}
