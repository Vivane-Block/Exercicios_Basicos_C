#include<stdio.h>
//Faça um programa para calcular o fatorial de um número inteiro informado pelo usuário;
int main(){
	
int f, n;
printf("Insira um valor: ");
scanf("%d",&n);

for(f=1;n>1;n--){
	f = f * n;
	printf("\nFatorial: %d", f);
}
	
}
