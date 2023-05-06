#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *prox;
}LISTA;

LISTA* entrada (LISTA *l, int n);
void saida (LISTA *l);

int main (){
	LISTA *inicio = NULL;
	int n,i=1,qtd;
	
	printf("Digite a qtd de numeros: ");
	scanf("%i", &qtd);
	
	while(i<=qtd{
		printf("Digite numero: ");
		scanf("%i", &n);
		inicio = entrada(inicio, n);
		i++;
	}
	
	saida(inicio);
	
	return 0;
}

LISTA* entrada (LISTA *l, int n){
	LISTA *novo = (LISTA*) malloc(sizeof(LISTA)); //malloc é uma laocação de memoria, ou seja esta alocano na memoria oa tamanho da lista
	novo->n=n; //sempre que tiver um ponteir ode umn dado estruturado o atributo dele é um -> ao inves do "."
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
		printf("%i\n",l->n);
		l=l->prox;
	}
}