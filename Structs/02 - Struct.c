#include<stdio.h>

typedef struct{
	
	char nome[50];
	float media;
	
}dados;

int main(){
	
	int i; 
	float maior = 0;
	
	dados aluno[5];

	for(i=0;i<5;i++){
		
	printf("\nInforme o nome do aluno %d:",i+1);
	gets(aluno[i].nome);
	printf("\nInforme a media do aluno %d:",i+1);
	scanf("%f",&aluno[i].media);
		while((getchar())!='\n');
		
		if(maior<aluno[i].media){
			maior=aluno[i].media;
		}
	}
	
	printf("\n\n..............DADOS DOS ALUNOS..............\n");
	printf("A maior media foi: %2.f\n",maior);
	for(i=0;i<5;i++){
		printf("\nAluno:%s\tMedia:%2.f",aluno[i].nome, aluno[i].media);
	}

}



