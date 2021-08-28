#include<stdio.h>
//Faça um programa que lê um valor inteiro informado pelo usuário e 
//apresenta a tabuada (até o 10) deste número.
int main(){
	
 int t,x;
    printf("Informe a tabuada que deseja: ");
    scanf("%d", &t);

    for(x=0;x<=10;x++){
        printf("%dx%d = %d\n", t, x, x * t);
    }
	}
	

	


