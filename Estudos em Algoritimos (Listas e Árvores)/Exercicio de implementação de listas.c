#include <stdio.h>	//Declaração de bibliotecas 
#include <stdlib.h>
#include <string.h>


/* Criação da lista: retorna uma lista vazia */
lista *cria_lista(){
   return NULL;
}



/* 
   Imprime a lista.
*/
void imprime_lista(lista *l){	//como parametro coloco a lista que desejo imprimir
    lista *atual = l; //declaramos um ponteiro para percorrer a lista, igualamos esse ponteiro ao primeiro endereço da lista para poder
    					// percorrer ele e alterer a posiçao depois de printar uma vez.

   while(atual!=NULL){ //condição para parada.
      printf("- Nome: %s; Idade: %d\n", (*atual).dado.nome, atual->dado.idade); // aqui printamos o que esta armazenado no campo nome e idade
      atual = atual->next; // faço com que o atual passe a apontar para o proximo elemento da lista.
   }
}




lista* insere_no_inicio(lista *l, pessoa dado){ //como parametos colocamos a lista e o tipo do dado que queremos inserir.
   lista* novo = malloc(sizeof(lista));//alocamos espaço para esse novo elemento de forma dinamica
   (*novo).dado = dado; //armazeno o dado no campo dado desse novo elemento
   (*novo).next = l; // informo que o ponteiro desse elemento apontara para a lista, ou seja, a cabeça da lista.
   l = novo;   //faço com que a cabeça da lista aponte para o elemento novo, como se fosse uma confirmação...
   return l; //retorna o ponteiro para o primeiro elemento da lista.
}




lista* insere_no_fim(lista *l, pessoa dado){	// entro com a lista e o tipo de dado que quero armazenar
	
	   lista* novo = malloc(sizeof(lista)); // aloco espaço para esse novo elemento que chamo de novo.
   (*novo).dado = dado;	//informo que o campo dado desse novo elemento tera o valor dado estavelecido no parametro.
   if(l==NULL){ //verifico se estou lidando com o ultimo elemento, se sim, significa que é uma lista vazia, portanto a propria cabeça da minha
   				//lista vai apontar para esse novo elemento.
   } 
   else{	//caso o contrario, tenho que encontrar o ultimo elemnento da lista, para inserir meu novo elemento no fim.
      lista *ultimo = l; // aqui eu estou criando um ponteiro comparivel com minha lista com o nome de ultimo para poder percorrer minha
      					//lista e encontrar o ultimo elemento, este que saberei qual é pois ele aponta para null.
      while(ultimo->next!=NULL){ //condição de parada
         ultimo = ultimo->next; // condição para busaca
      }
      ultimo->next = novo; //quando encontrar, faço com que o elemento que eu encontrei passe a apontar para esse meu novo elemento
      						// e automaticamente esse meu novo elemento passara a apontar para null.
   }
   return l; //retorno o ponteiro para o primeiro elemento da lista agora com um novo elemento no fim.
   
   // criamos outra variavel ou no caso, ponteiro, para poder retornar a lista "l" no final... pois se usassemos ela, correriamos o 
   //risco de retornar algo completamente diferente.

}




lista* insere_apos(lista *l, pessoa dado, pessoa posicao){//entro com  a lista e o dado que quero inserer
  lista *novo = malloc(sizeof(lista)); // aloco de forma dinamica o espaço na memoria.
	novo->dado = dado; // faco com que dado seja armazenado nesse novo elemneto criado.
	novo->next = NULL; //faço com que inicialmente ele aponte para NULL
	lista *x = l; // crio um ponteiro para percorrer a lista sem modificar ela
	while(x != NULL) // crio a condição de parada baseado no final da lista
	{
	
		if(strcmp(x->dado.nome, posicao.nome) == 0 && x->dado.idade == posicao.idade) // comparo para ver se os dados existentes 
																						// em dado e em posição são iguais
		{
			novo->next = x->next; //faço com que o campo next do novo dado aponte para o proximo elemento ao qual x apontava.
			x->next = novo; // faco com que x aponte para o elemento novo
			break; // parada
		}
		
			x = x->next; // percorrer a lista.
	}
	return l; // retorno da lista agora modificada.
}
    



lista* exclui(lista *l, pessoa dado){ // como parametros temos a lista e o dado que queremos excluir
    lista *p = l; //criação de ponteiro auxiliar
	if(p == NULL) // verificação de lista vazia
		return l; 
	if(strcmp(p->dado.nome, dado.nome) == 0 && p->dado.idade == dado.idade){ // caso seja o primeiro elemento da lista
		l = p->next; // l passa a ser o ponteiro para o proximo elemento
			return l; // retorno da lista modificada.
	}
	
	while(p->next != NULL) // caso tenhamos que procurar o elemento pela lista.
	{
		if(strcmp(p->next->dado.nome, dado.nome) == 0 && p->next->dado.idade == dado.idade) //comparação para busca
		{
			//caso tenha encontrado o elemento:
			
			p->next = p->next->next; //fazemos com que o campo next de p, aponte para o proximo elemento do proximo.
			break;
		}
		
		p = p->next; // busca do elemento
	}
	
	return l; //retorno da lista modificada.
}
