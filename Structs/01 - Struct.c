#include<stdio.h>

typedef struct dados_aluno{
	char nome[50];
	float nota;
}dados_aluno;


int main(){
	
	float media;
	
	dados_aluno a1;
	dados_aluno a2;
	dados_aluno a3;
	dados_aluno a4;
	dados_aluno a5;
	
printf("\nNome do aluno1:");
scanf("%s",a1.nome);
printf("\nMedia do aluno:");
scanf("%f",&a1.nota);

media=a1.nota;

printf("\nNome do aluno2:");
scanf("%s",a2.nome);
printf("\nMedia do aluno:");
scanf("%f",&a2.nota);
if(media<a2.nota){
	media=a2.nota;
}
printf("\nNome do aluno3:");
scanf("%s",a3.nome);
printf("\nMedia do aluno:");
scanf("%f",&a3.nota);
if(media<a3.nota){
	media=a3.nota;
}
printf("\nNome do aluno4:");
scanf("%s",a4.nome);
printf("\nMedia do aluno:");
scanf("%f",&a4.nota);
if(media<a4.nota){
	media=a4.nota;
}
printf("\nNome do aluno5:");
scanf("%s",a5.nome);
printf("\nMedia do aluno:");
scanf("%f",&a5.nota);
if(media<a5.nota){
	media=a5.nota;
}

printf("\n............Dados dos alunos...........\n");

	printf("\nNome do aluno:%s\tMedia do aluno:%2.f",a1.nome, a1.nota);
	printf("\nNome do aluno:%s\tMedia do aluno:%2.f",a2.nome, a2.nota);
	printf("\nNome do aluno:%s\tMedia do aluno:%2.f",a3.nome, a3.nota);
	printf("\nNome do aluno:%s\tMedia do aluno:%2.f",a4.nome, a4.nota);
	printf("\nNome do aluno:%s\tMedia do aluno:%2.f",a5.nome, a5.nota);
	
}




	
	

