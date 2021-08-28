#include<stdio.h>
float x, y, z;
int main(){
	printf("Atribua um valor para x: ");
	scanf("%f", &x);
	printf("Atribua um valor para y: ");
	scanf("%f", &y);
	
	z = x;
	x = y;
	y = z;

	printf("o valor de x = %2.f e o valor de y = %2.f",x, z);
}
