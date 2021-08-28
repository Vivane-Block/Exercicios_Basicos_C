#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
   char palavra[30]; 
   int contador; 
} elemento;

typedef struct lstItem{ 
   elemento item;
   struct lstItem *next;
} lstElemento;

void cria_lista(lstElemento **L){ 
   *L = NULL;
}

void insere_antes(lstElemento **pos, lstElemento *e){
	e->next = (*pos)->next;
	(*pos)->next = e;
}

void listagem(lstElemento *lista){
	
	lstElemento *p = (lstElemento *)calloc(1,sizeof(lstElemento));
	p = lista;                            
	while(p != NULL)
	{
		printf("%s - %d\n", p->item.palavra, p->item.contador);
		p = p->next;
	}	
}
    
void le_ordena(lstElemento **list, char p[]){

	int inseriu = 0;
	
	if(*list == NULL)
	{
		lstElemento *novo = (lstElemento *)calloc(1, sizeof(lstElemento));
	 	strcpy(novo->item.palavra, p);   
	 	novo->item.contador= 1;         
    	novo->next = NULL;
    	*list = novo;
    	inseriu = 1;               
	}
	
	if(*list != NULL && inseriu == 0)
	{
		lstElemento *x, *y, *r;
		x = *list;

		if(strcmp(x->item.palavra, p) == 0)
		{
			x->item.contador += 1;
			inseriu = 1;
		}
		
		while((x->next != NULL) && (inseriu == 0))   
		{
			if(strcmp(x->next->item.palavra, p) == 0)
			{
				x->next->item.contador += 1; 
				
				if(x->item.contador < x->next->item.contador)
				{
					r = x->next;
					x->next = r->next;
					y = *list;
					
				
					if(y->item.contador < r->item.contador)
					{
						r->next = *list;  
						*list = r;
						inseriu = 1;
					}
					else
					{
						while((y->next->item.contador >= r->item.contador) && (y->next != NULL))
						{
							y = y->next;
						}
						
						insere_antes(&y, r);
						inseriu = 1;
					}
				}
				else
				{
					inseriu = 1;
				}
			}
			
			x = x->next;
			
		}
		if(inseriu == 0)
		{
			lstElemento *novo = (lstElemento *)calloc(1, sizeof(lstElemento));
		 	strcpy(novo->item.palavra, p);
		 	novo->item.contador= 1;
			novo->next = NULL;
			insere_antes(&x, novo);
			inseriu = 1;
		}
	}

}

int busca(lstElemento *lista, char p[]){
	
	lstElemento *aux = lista;
	
	if(lista==NULL || (strcmp(aux->item.palavra, p)==0))
	{
		printf("\n\t%s : %d\n", aux->item.palavra, aux->item.contador);
	}
	
	else
	{
		return busca(lista->next,p);
	}
}


int main(){	
	int opcao;
	char *nome[50];
	char palavra[100];
	lstElemento *lista;
	FILE *arquivo;
	
	cria_lista(&lista);
	
	setlocale(LC_ALL,"portuguese");
	
	printf("\tDigite o nome do arquivo de texto acrescido de sua extenção (ex: nome.txt): \n\n");
	scanf("\t%s",&nome);
	
	arquivo = fopen(&nome,"r");
	
	if(arquivo)
	{
		while(!feof(arquivo))
		{
			fscanf(arquivo,"%s", &palavra);
			le_ordena(&lista, palavra);
		}
	}
	else
	{
		printf("\n\tERRO AO ABRIR O ARQUIVO\n");
	}
	
	
	do{
		
	printf("\n\tEscolha uma das opções:\n\n");
	printf("\t1- Pesquisa do numero de ocorrências de uma palavra.\n");
	printf("\t2- Listagem das palavras presentes no texto com seus respectivos números de ocorrências.\n");
	printf("\t3- Encerramento do programa.\n\n");
	printf("\tOpção selecionada: ");
	scanf("\t%d",&opcao);
	printf("\n");
	
	switch(opcao){
		case 1:
			printf("\n\tInforme a palavra que deseja buscar: ");
			scanf("%s",&palavra);
			system("cls");
			printf("\n\n\tResultado:\n");
			busca(lista, palavra);
			break;
		case 2:
			system("cls");
			printf("Lista:\n\n");
			listagem(lista);
			break;

	}system("pause");
	
	system("CLS");
}while(opcao!=3);

if(opcao == 3){
	
	system("cls");
	printf("\n\tPROGRAMA ENCERRADO.\n");
					printf("\n\t ________________________ CRÉDITOS: ________________________\n\n");
		printf("\n\t *Grupo:            Beatriz Fernanda; João Vitor; Lucas Tavares; Viviane Block.\n");
		printf("\n\t *Instituição:      Universidade Federal de Santa Catarina\n");
		printf("\n\t *Curso:            Engenharia de Controle e Automação\n");
		printf("\n\t *Disciplina:       Algoritimos e Estrutura de Dados\n");
		printf("\n\t *Professor:        Maiquel de Brito\n\n\n\n");
}
system("pause");
}
