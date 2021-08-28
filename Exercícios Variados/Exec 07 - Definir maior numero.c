#include<stdio.h>

int main(){
	
	int t1, t2;
	
	printf ("Numero de gols do time 1: ");
	scanf("%d", &t1);
	printf("Numero de gols do time 2: ");
	scanf("%d",&t2);
	
	if(t1>t2){
		printf("\nO time 1 ganhou !\nmarcando: %d gols", t1);
	}else if (t2>t1){
		printf("\nO time 2 ganhou !\nmarcando: %d gols", t2);
	}else{
		printf("O jogo resultou em empate.");
	}
}
