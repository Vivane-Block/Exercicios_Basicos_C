//Faça um programa em que lê dois valores inteiros a e b informados pelo usuário 
//e apresenta a tabuada (até o 10) dos números 
//inteiros no intervalo de a até b;
#include<stdio.h>

int main(){
	
 int x,i,a,b,c;
    printf("digite dois numeros inteiros:  ");
    scanf("%d %d", &a, &b);
    
    for(i=a;i<=b;i++){
    	for(x=0;x<=10;x++){
    		c = x*i;
        printf("%dx%d = %d\n", i, x, c);
    }
   
	}
	
	}
	
