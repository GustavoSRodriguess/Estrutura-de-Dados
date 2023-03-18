#include <stdio.h>
#include <stdlib.h>

void converta(char *t);

int main (){
	char nome[50];
	
	printf("escreva um nome: ");
	gets(nome);
	
	converta(nome);
	
	printf("o nome e %s\n", nome);
	
	
	
	return 0;
}

void converta(char *t){
	if(t[0]>= 'a' && t[0]<='z'){
		t[0]-='a'-'A'; // mesma coia=sa que 32
		
	}
	
}