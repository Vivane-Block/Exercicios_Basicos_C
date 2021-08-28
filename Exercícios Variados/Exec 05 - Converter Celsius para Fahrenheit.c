#include<stdio.h>
float t1, t2;
int main(){
	printf("Insira o valor em Celcius:\n");
	scanf("%f",&t1);
	
	t2 = (9*t1+160)/5;
	
	printf(" O valor da temperatura em Fahrenheit: %.2f", t2);
}
