#include<stdio.h>

int main(){
	
	int n1, n2, n3, x;
	
	printf("Insira a nota 1 : ");
	scanf("%d",&n1);
	printf("\nInsira a nota 2 : ");
	scanf("%d",&n2);
	printf("\nInsira a nota 3 : ");
	scanf("%d",&n3);
	
	x = (n1+n2+n3)/3;
	
	if(x>=7){
		printf("\nO aluno foi aprovado.\nCom a media igual a %d", x);
	}else{
		printf("\nO aluno foi reprovado.\nCom media igual a %d", x);
	}
}
