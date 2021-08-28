#include <stdio.h>		//Declarando biblioteca padr�o
#include <stdlib.h>		//Declarando biblioteca para listas


// O primeiro passo para se criar uma lista � criar as structs que ir�o compor a estrutura em si.

typedef struct listItem {	//Essa struct tem a func�o de criar os dados, ou seja, dentro dela ser�o armazenados as informa��es
							//e o um ponteiro que ira apontar para o proximo elemento da lista.
							//para isso usamos recursividade no ponteiro! struct listItem *next!
							
 int value; // valor do elemento da lista
 
 struct listItem *next; // ponteiro para o pr�ximo elemento
 
} ListItem; // Chamada para essa fun��o.


//cria��o de uma lista vazia
ListItem* cria_lista(){
 Return NULL;
}

int main(){
 ListaItem* lista = cria_lista(); //Aqui a ListaItem inicia uma Lista com o nome de lista (nome para "lista" mesmo para ficar mais facil de entender :)).
 
	// Agora vamos implementar essa lista por meio de fun��es.
	//Para n�o se perder, essas fun��es ser�o colocadas a baixo da main.
	
	lista = insere_no_inicio(lista,5); // Aqui chamamos a fun��o e colocamos como parametro o nome da lista e o valor que queremos adicionar.
	
}

ListItem* insere_no_inicio(ListItem *head, int dado){ 	// para inserir um novo elemento temos que passar como parametro a cabe�a da lista
														// e o dado que queremos adicionar.
														
														
 ListItem* item = malloc(sizeof(ListItem));		//Nessa etapa, alocamos de forma dinamica um espa�o de tamanho ListItem para acomodar nosso
 												// novo elemento.
 
 //Para compreender melhor, temos que item � uma caixinha e dentro dela temos o valor e o penteiro:
 												
 item->value = dado;	// aqui especificamso que o espa�o valor � o dado que especificamos no parametro por meio da fun��o main.
 item->next = head;	// aqui informamos que o ponteiro apontara para a cabe�a da lista pois queremos que esse valor passe a ser o primeiro.
 head = item; // e aqui por fim, declaramos que a cabe�a apontara para a "caixinha" item.

//Para finalizar, retornamos o ponteiro cabe�a, que dara o valor do primeiro elemento da lista.
return head;

