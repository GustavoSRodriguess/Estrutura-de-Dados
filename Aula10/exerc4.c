#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
	int sala, semestre;
	char disciplina[50], diaSemana[15];
	struct disciplina *prox;
}LISTA;

LISTA* entrada (LISTA *l, int sala, int semestre, char *diaSemana, char *disciplina);
void saida (LISTA *l);

int main (){
	LISTA *inicio = NULL;
	int n,i=1,qtd;
	
	int sala, semestre;
	char disciplina[50], diaSemana[15];
	
	printf("Digite a qtd de disciplinas: ");
	scanf("%i", &qtd);
	
	while(i<=qtd){
		printf("Digite a sala: ");
		scanf("%i", &sala);
		fflush(stdin);
		printf("Digite o semestre: ");
		scanf("%i", &semestre);
		fflush(stdin);
		printf("Digite a disciplina: ");
		gets(disciplina);
		fflush(stdin);
		printf("Digite o dia da semana: ");
		gets(diaSemana);
		fflush(stdin);
		
		inicio = entrada(inicio, sala, semestre, diaSemana, disciplina);
		i++;
	}
	
	saida(inicio);
	
	return 0;
}

LISTA* entrada (LISTA *l, int sala, int semestre, char *diaSemana, char *disciplina){
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA)); //malloc é uma laocação de memoria, ou seja esta alocano na memoria oa tamanho da lista
	
	novo->sala=sala;
	novo->semestre=semestre;
	strcpy(novo->diaSemana,diaSemana); //como n da pra copiar uma string tem q adicionar essa biblioteca para ter o strcpy para ai sim copiar
	strcpy(novo->disciplina,disciplina);
	if(l==NULL){
		novo->prox=NULL;
		l=novo;
	}else{
		novo->prox=l;
		l=novo;
	}
	return l;
}

void saida (LISTA *l){
	while (l!=NULL){
		printf("Sala: %i\n",l->sala);
		printf("Semestre: %i\n",l->semestre);
		printf("Semana: %s\n",l->diaSemana);
		printf("Disciplina: %s\n",l->disciplina);
		l=l->prox;
	}
}