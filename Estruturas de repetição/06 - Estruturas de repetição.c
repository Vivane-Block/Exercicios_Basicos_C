#include<stdio.h>
//Fa�a um programa que l� um valor inteiro informado pelo usu�rio e 
//apresenta a tabuada (at� o 10) deste n�mero.
int main(){
	
 int t,x;
    printf("Informe a tabuada que deseja: ");
    scanf("%d", &t);

    for(x=0;x<=10;x++){
        printf("%dx%d = %d\n", t, x, x * t);
    }
	}
	

	


