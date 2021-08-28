#include<stdio.h>
//Criar um programa que imprima os números ímpares entre 1 (inclusive)a 1.000 
//(inclusive) em ordem decrescente.
int main(){
	
	int i;
	
	for(i=1000;i>0;i--){
		if(i%2!=0){
			printf("%d\n", i);
		}
	}
}
