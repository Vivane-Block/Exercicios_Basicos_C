#include<stdio.h>
#include<strings.h>
//Escreva um programa que leia três strings e verifique as mesmas
//terminam com o caractere a;
int main(){
	
	char palavra1[55], palavra2[55], palavra3[55];
	int t1,a;
	
	printf("Insira uma palavra : ");
	gets(palavra1);
	
	t1=strlen(palavra1);
	
	if(palavra1[t1-1]=='a'){
		printf("\nA palavra termina com a\n");
	}else{
		printf("\nA palavra nao termina com a\n");
	}
	
	printf("\n");
	
	printf("Insira uma palavra : ");
	gets(palavra2);
		
	t1=strlen(palavra2);
	
	if(palavra2[t1-1]=='a'){
		printf("\nA palavra termina com a\n");
	}else{
		printf("\nA palavra nao termina com a\n");
	}
	
	printf("\n");
		
	printf("Insira uma palavra : ");
	gets(palavra3);
		
	t1=strlen(palavra3);
	
	if(palavra3[t1-1]=='a'){
		printf("\nA palavra termina com a\n");
	}else{
		printf("\nA palavra nao termina com a\n");
	}
	


}
