#include<stdio.h>
#include<strings.h>
//Escreva um programa para ler o código, o nome e a idade de 10
//pessoas e armazenar em um arquivo texto contendo os dados de uma
//pessoa em cada linha com os campos separados por tabulação.

int main(){
	
	FILE *arquivo;
	char tabela[20] = "tabela.txt";
	char nome[20];
	int a,c,i;
	
	arquivo = fopen(tabela,"w");
	
	if(arquivo==NULL)
	{
		printf("\n Nao foi possivel abrir o arquivo.\n");
	}else{
		
		fprintf(arquivo,"\tCodigo\tNome\tIdade\n");
		fprintf(arquivo,"------------------------------\n");
		for(a=0;a<3;a++)
		{
			printf("\nInforme o Codigo: ");
			scanf("%d",&c);
			printf("\nInforme o nome: ");
			scanf("%s",&nome);
			printf("\nInforme a idade: ");
			scanf("%d",&i);
			
			fprintf(arquivo,"\t%d\t%s\t%d\n",c,nome,i);

		}
		

	}

		fclose(arquivo);
}
