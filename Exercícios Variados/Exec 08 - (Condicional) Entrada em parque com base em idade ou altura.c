#include<stdio.h>
//entrada permitida apenas a partir de 8 anos ou altura acima de 1.60
int main(){
	
	int i, a;
	
	printf("Informe sua idade : ");
	scanf("%d",&i);
	printf("\nInforme sua altura em centimetros : ");
	scanf("%d",&a);
	
	if(i>7 || a>160){
		printf("\nEntrada permitida.");
	}else{
		printf("Entrada proibida.");
	}
	
}
