#include<stdio.h>
//Fa�a um programa para calcular o fatorial de um n�mero inteiro informado pelo usu�rio;
int main(){
	
int f, n;
printf("Insira um valor: ");
scanf("%d",&n);

for(f=1;n>1;n--){
	f = f * n;
	printf("\nFatorial: %d", f);
}
	
}
