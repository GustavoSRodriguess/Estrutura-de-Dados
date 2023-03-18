#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void escreva(int *l, int *c, char *t);

int main (void){
	
	//variaveis
	int linha, coluna;
	char texto[50];
	
	//entrada
	printf("digite a linha: ");
	scanf("%i", &linha);
	printf("digite a coluna: ");
	scanf("%i", &coluna);
	fflush(stdin);
	printf("digite um trxto: ");
	gets(texto);
	
	//saida
	escreva(&linha, &coluna, texto);
	
	return 0;
}

void escreva(int *l, int *c, char *t){
	int i;
	system("cls");
	for(i=1; i<=*l; i++){
		printf("\n");
	}
	for(i=1;i<=*c; i++){
		printf(" ");
	}
	printf("%s", t);
}