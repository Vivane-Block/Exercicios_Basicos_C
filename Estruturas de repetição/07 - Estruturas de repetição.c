//Fa�a um programa em que l� dois valores inteiros a e b informados pelo usu�rio 
//e apresenta a tabuada (at� o 10) dos n�meros 
//inteiros no intervalo de a at� b;
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
	
