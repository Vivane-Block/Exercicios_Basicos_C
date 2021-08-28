#include<stdio.h>
//Criar um programa que imprima os números pares entre 1 (inclusive) a 1.000 
//(inclusive) em ordem crescente.
int main(){
	
int i=1;

while(i<=1000){
	
	if(i%2==0){
		
		printf("%d\n",i);
	}
		i++;
}
}
