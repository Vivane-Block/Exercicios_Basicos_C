#include<stdio.h>
#include<strings.h>
//Escreva um programa para ler 20 inteiros digitados pelo usuário e
//após a leitura gravar os 20 valores em um arquivo texto (um valor em cada linha).
int main(){
	
	FILE *arquivo;
	char inteiros[20] = "inteiros.txt";
	int i, valor;
	
	arquivo = fopen(inteiros,"w");
	
	if(inteiros==NULL)
	{
		printf("\n Nao foi possivel abrir o arquivo.\n");
	}
	else{
		for(i=0;i<20;i++)
		{
			printf("\n Informe o valor: ");
			scanf("%d",&valor);
			fprintf(arquivo,"%d\n",valor);
		}
		
		fclose(arquivo);
		
		}	
	
}
