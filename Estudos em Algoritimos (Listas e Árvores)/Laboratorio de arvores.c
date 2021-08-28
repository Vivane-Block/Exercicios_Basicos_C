#include <stdio.h>
#include<stdbool.h>
#include<string.h>
#include <stdlib.h>


Tree *create_tree(){
   return NULL;
}

typedef struct{
	char nome[30];
	int idade;
}Pessoa;

Tree *insert(Tree *t, Pessoa *dado){ 
	
   if(t==NULL){ //se t for null ele ira adicionar o novo dado a raiz da arvore
      t = malloc(sizeof(Tree));
      (*t).dado = dado; //inserção do novo dado
      (*t).left = NULL; //os filhos ainda não existem por isso são nulos
      (*t).right = NULL; 
   }
   
   else{ //se t já tiver uma raiz
     
	if(strcmp(dado->nome,t->dado->nome)<0){ //aqui será testado se o conteudo do no atual é menor que o já existente
      	(*t).left = inserir_nodo((*t).left,dado); //se for ele será adicionado a esquerda do no atual
	  }
    
    else{ //aqui caso o conteudo do no atual for maior que o já existente
      	 (*t).right = inserir_nodo((*t).right,dado); //ele será adicionado a direita do no atual
	    }
	} 
   return t;
}

/* imprimir o conteudo dos nodos percorrendo a arvore em pre-ordem*/
void imprimir_preorder(Tree *root){
    if(root != NULL){
        printf(">%s ; (%d)\n", root->dado->nome, root->dado->idade);
        imprimir_preorder(root->left); //faz a chamada recursiva pro nó a left, perceba que o root->right só é chamado quando passa por todos os nós left
        imprimir_preorder(root->right); // chamada recursiva para o nó a right
    }
}

/* imprimir o conteudo dos nodos percorrendo a arvore em pos-ordem*/
void imprimir_postorder(Tree *root){
	if(root != NULL){
        imprimir_postorder(root->left);
        imprimir_postorder(root->right);
        printf(">%s ; (%d)\n", root-> dado->nome, root-> dado->idade);
	}
}

/* imprimir o conteudo dos nodos percorrendo a arvore em-ordem (in-order)*/
void imprimir_inorder(Tree *root){
        if(root != NULL){
            imprimir_inorder(root->left);
        	printf(">%s ; (%d)\n", root-> dado->nome, root-> dado->idade);
            imprimir_inorder(root->right);
        }
}

  





