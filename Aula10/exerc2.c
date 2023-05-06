#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
	char nome[50], fabricante[50], licenca[50], versao[50];
}Software;

Software entrada (void);
void saida (Software a);

int main (){
	Software bd[TAM];
	int i;
	
	for (i=0; i<TAM; i++){
		system("cls");
		bd[i] = entrada();
	}	
	
	printf("\tNome\tFabricante\tLicenca\tVersao\n\n");
	
	for (i=0; i<TAM; i++){
		saida (bd[i]);
	}
	
	return 0;
}

Software entrada (void){
	Software a; 
	printf("digite o nome: ");
	gets(a.nome);
	fflush(stdin);
	
	printf("digite o fabricante: ");
	gets(a.fabricante);
	fflush(stdin);
	
	printf("digite a licensa: ");
	gets(a.licenca);
	fflush(stdin);
	
	printf("digite a versao: ");
	gets(a.versao);
	fflush(stdin);
	
	return a;
	
}

void saida (Software a){
	printf("\t%s\t%s\t%s\t%s\n", a.nome, a.fabricante, a.nome, a.versao);
}