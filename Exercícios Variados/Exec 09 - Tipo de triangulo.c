#include<stdio.h>
//Crie um programa em que o usu�rio informe o tamanho dos tr�s lados de um
//tri�ngulo e que, em seguida, informe o tipo do tri�ngulo.

int main(){
	
	float m1, m2, m3;
	
	printf("Insira a medida 1 : ");
	scanf("%f",&m1);
	printf("\nInsira a medida 2 : ");
	scanf("%f",&m2);
	printf("\nInsira a medida 3 : ");
	scanf("%f",&m3);
	
	if(m1==m2 && m2==m3){
		printf("\nO triangulo e equilatero.");
	}else if(m1!=m2 && m2!=m3 && m3!=m1){
		printf("\nO triangulo e escaleno.");
	}else{
		printf("\nO triangulo e isosceles.");
	}
	
	
}
