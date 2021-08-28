#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Primeira vers�o do C�digo - comentado para que o grupo possa entender o andamento caso queira, em caso de duvidas ou 
// caso queiram implementar algo diferente, porfavor me avisem okay?

/* P.S.: Em algumas partes voc�s ver�o: " **OKAY** ", n�o estranhem, � s� para que eu saiba o que j� fiz/comecei e o que falta fazer.*/

//Bor� l�:
																									 
typedef struct{
   char palavra[30];  //struct onde s�o criadas variaveis amazenar as palavras e seus contadores
   int contador; 
} elemento;

typedef struct lstItem{  //cria��o do n� com o ponteiro para os pr�ximos elementos
   elemento item;
   struct lstItem *next;
} lstElemento;

// Cria��o de uma lista vazia onde serao armezenadas as palavras e contadores
void cria_lista(lstElemento **L)
{ 
   *L = NULL;
}

//INSERE Antes
void insere_apos(lstElemento **pos, lstElemento *e)  //fun��o auxiliar para ordena��o da lista
{
	e->next = (*pos)->next;
	(*pos)->next = e;
}

void listagem(lstElemento *lista)  //fun��o para imprimir a lista, palavras e seus contadores quando acionada op��o 2 do menu
{
	lstElemento *p = (lstElemento *)calloc(1,sizeof(lstElemento)); //cria��o do ponteiro p - auxiliar - para n�o mexer diretamente na lista
	p = lista;                             //equivalencia entre p e lista
	while(p != NULL)                       //enquanto p n�o for null(tiver elementos ainda na lista), ser�o printadas as palavras e seus contadores
	{
		printf("%s - %d\n", p->item.palavra, p->item.contador);
		p = p->next;  //passa para os proximos elementos(palavra/contador)
	}	
}

/*Vou criar uma fun��o que vai se chamar: l�_ordena. Nela ser� implementado:
1- Ler a o arquivo de texto;  -> **OKAY**
2- Pegar palavra por palavra e fazer o seguinte com cada uma delas:

-> caso a lista ainda n�o tenha sido criada, ou seja, estejamos falando da primeira palavra, ela vai criar a...
... lista e alocar na primeira posi��o(da pra fazer isso no if que verifica se a lista est� vazia).  -> **okay**

-> se a lista j� existir, essa palavra vai ser comparada com as j� existentes na lista (strcmp) e:
     ----> (if) SE ela j� apareceu na lista, eu vou contabilizar +1 no contador da palavra j� alocada.
     
        (QUANDO EU FIZER ISSO, EU J� REPOSICIONO A PALAVRA NA LISTA DE ACORDO COM O N�MERO DO CONTADOR. 
		PARA ISSO EU POSSO PERCORRER QUANTAS VEZES EU BEM ENTENDER ESSA COISA PORQUE PRA ORDENAR A LISTA
		N�O TEM ORDEM EXIGIDA, DANE-SE.)  -> ** ent�o teoricamente: okay** (tenho que mudar a insere_apos, pois vai dar erro)
		
     ----> (else) SE N�O eu vou criar um novo elemento para guardar a nova palavra no FIM da lista. -> **okay**
	 */ 
    
void le_ordena(lstElemento **list, char p[])
{
	// inseriu � para verificar se ja foi inserido a palavra ent�o n�o fazer mais nada, parando loops e tal... (economiza tempo e evita erro)
	// 1 = Verdadeiro e 0 = Falso (para quem ficar na d�vida)
	int inseriu = 0;
	
	if(*list == NULL)     //caso lista esteja vazia
	{
		lstElemento *novo = (lstElemento *)calloc(1, sizeof(lstElemento));
	 	strcpy(novo->item.palavra, p);   //copia palavra do p para novo item inserido
	 	novo->item.contador= 1;         //contador novo item passa valer 1
    	novo->next = NULL;             //prox elem. = null
    	*list = novo;
    	inseriu = 1;             //inseriu passa a verdadeiro
	}
	if(*list != NULL && inseriu == 0)  //caso a lista ja contenha elementos previamente inseridos/alocados
	{
		// x, y, r s�o auxiliares
		lstElemento *x, *y, *r;
		x = *list;
		
		// para caso seja o primeiro (ja que eu vou estar comparando sempre o next no while)
		if(strcmp(x->item.palavra, p) == 0) //compara��o item.palavra e "p", zero = sao iguais!
		{
			x->item.contador += 1; // incrementa 1 no contador sem adicionar nova palavra a lista
			inseriu = 1;
		}
		
		while((x->next != NULL) && (inseriu == 0))   //acionando quando a primeira palavra n�o � igual && ha mais de um elemento ja alocado
		{
			if(strcmp(x->next->item.palavra, p) == 0)  //compara agora com a proxima palavra para verificar igualdade
			{
				x->next->item.contador += 1; // incrementa 1 se for igual
				
				// verifico se realmente preciso reposicionar (as vezes o local onde ele esta, mesmo incrementando ainda � o local dele)
				if(x->item.contador < x->next->item.contador) //verifica se a anterior � menor que a pr�xima
				{
					
					r = x->next;         // reposicionando/ordenando (trocando 1� com 2�)
					x->next = r->next;
					
					y = *list;
					
					// para caso seja o primeiro (ja que eu vou estar comparando sempre o next no while)
					if(y->item.contador < r->item.contador)  //verifica se contador da lista original com da ordenada
					{
						r->next = *list;  //reposicionando/invetendo
						*list = r;
						inseriu = 1;
					}
					else
					{
						// vou item por item at� saber onde posicionar
						while((y->next->item.contador >= r->item.contador) && (y->next != NULL))  //vai comparando com a pr�xima at� que n�o haja maior depois...
						{
							y = y->next;          //caso n�o precise trocar de lugar, ele vai simplesmente percorrer a lista e posicionar usando a insere antes
						}
						
						// posiciona no devido lugar
						insere_apos(&y, r); //antes
						inseriu = 1;
					}
				}
				else
				{
					inseriu = 1; //garantir que apos tudo isso, vai contar como item inserido.
				}
			}
			
			x = x->next; //execu��o do primeiro while
			
		}
		if(inseriu == 0) //se a palavra ainda n�o se encaixou, agora ela vai ser inserida no final
		{
			lstElemento *novo = (lstElemento *)calloc(1, sizeof(lstElemento));
		 	strcpy(novo->item.palavra, p);
		 	novo->item.contador= 1;
			novo->next = NULL;
			insere_apos(&x, novo);  //antes
			inseriu = 1;
		}
	}

}
/*OBSERVA��O:  */
//(strcmp(aux2->item.palavra, posicao.palavra) == 0 )-> serve para comparar se as palavra s�o iguais
//(strcpy) -> serve para copiar a palavra lida para o lugar desejado, que no nosso caso � num elemento da lista

int busca(lstElemento *lista, char p[]){
	// essa fun��o � a que temos no moodle, com o nome das variaveis trocadas e com o contador sendo printado na tela com a palavra
	lstElemento *aux = lista;
	if(lista==NULL || (strcmp(aux->item.palavra, p)==0)){
		printf("\n\t%s : %d\n", aux->item.palavra, aux->item.contador);
	}
	else{
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
	
	setlocale(LC_ALL,"portuguese"); //Adiciona o idioma portugu�s para exibir a acentua��o necess�ria.
	
	printf("\tDigite o nome do arquivo de texto:\n\n");
	scanf("\t%s",&nome);
	
	//AQUI ABRE O ARQUIVO DE TEXTO
	arquivo = fopen(&nome,"r");
	
	if(arquivo)
	{
		while(!feof(arquivo)) //AQUI L� O ARQUIVO DE TEXTO
		{
			fscanf(arquivo,"%s", &palavra);
			
			le_ordena(&lista, palavra);
		}
		
	}
	else
	{
		printf("\n\tERRO AO ABRIR O ARQUIVO\n"); //N�.... Vida que segue
	}
	
	
	do{

	//AQUI COME�A O MENU
	printf("\n\tEscolha uma das op��es:\n\n");
	printf("\t1- Pesquisa do numero de ocorr�ncias de uma palavra.\n");
	printf("\t2- Listagem das palavras presentes no texto com seus respectivos n�meros de ocorr�ncias.\n");
	printf("\t3- Encerramento do programa.\n\n");
	printf("\tOp��o selecionada: ");
	scanf("\t%d",&opcao);
	printf("\n");
	
	switch(opcao){
		case 1:
			printf("\n\tInforme a palavra que deseja buscar: "); // chamamos a fun��o de busca e ela ta rodando bonitinho :) Por favor n�o inventem mais moda okay? Deixa isso pra quando terminar tudo que ai minha sanidade volta :)
			scanf("%s",&palavra);
			system("cls");
			printf("\n\n\tResultado:\n");
			busca(lista, palavra);
			break;
		case 2:
			system("cls");
			printf("Lista:\n\n");
			listagem(lista); // chamamos a fun��o listagem e XABLAU, TEMOS UMA LISTA!
			break;

	}system("pause");
	
	system("CLS");
}while(opcao!=3);

if(opcao == 3){
	
	system("cls");
	printf("\n\tPROGRAMA ENCERRADO.\n");
					printf("\n\t ________________________ CR�DITOS: ________________________\n\n");  //Conjunto de printf's para exibi��o dos cr�ditos.
		printf("\n\t *Grupo:            Beatriz Fernanda; Jo�o Vitor; Lucas Tavares; Viviane Block.\n"); // E respondendo a pergunta Lucas, eu n�o concordo em deixar meu nome separado por estar codando, grupo � grupo :)
		printf("\n\t *Institui��o:      Universidade Federal de Santa Catarina\n");
		printf("\n\t *Curso:            Engenharia de Controle e Automa��o\n");
		printf("\n\t *Disciplina:       Algoritimos e Estrutura de Dados\n");
		printf("\n\t *Professor:        Maiquel de Brito\n\n\n\n");
}
system("pause");
}
	
	


