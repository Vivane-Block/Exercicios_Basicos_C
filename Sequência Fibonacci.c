#include <stdio.h>
// Crie um programa que escreva os n�meros da sequ�ncia Fibonacci menores que um n�mero n inserido pelo usu�rio;
main() {

    int n, x = 0, y = 1, aux;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n\n");
    printf("%d\n", y);

    for(int i = 0; i < n; i++) {

        aux = x + y;
        x = y;
        y = aux;

        printf("%d\n", aux);
    }
}
