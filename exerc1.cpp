#include <stdio.h>
#include <stdlib.h>

//atributos que serao atribuidos 
struct pessoa{
	char nome[50];
	int idade;
	float peso;
};

//pessoa abstrato
typedef struct pessoa Pessoa;




int main (){
	//entidade "a" que vai ter atributos de pessoa
	Pessoa a;
	
	printf("digite o nome: ");
	gets(a.nome);
	fflush(stdin);
	
	printf("digite a idade: ");
	scanf("%i",&a.idade);
	fflush(stdin);
	
	printf("digite o peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	
	printf("nome o nome e %s\n", a.nome);
	printf("idade e de %i\n", a.idade);
	printf("peso e de %f\n", a.peso);
	
	
	
	
	return 0;
}