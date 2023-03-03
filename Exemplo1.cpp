#include <stdio.h>
#include <stdlib.h>
#define TAM 3
// dado estrutura
typedef struct pessoa{
    int idade;
    char nome[50];
}Pessoa;
// prototipo de função
void entrada (Pessoa *a);
void saida (Pessoa *b);
int main(void){
    // variáveis    
	Pessoa bd[TAM];
    printf("Entrada %p = ",bd);
    entrada(bd);
    printf("Saida %p = ",bd);
    saida(bd);
    return 0;
}
void entrada (Pessoa *a){
    int i;
    printf("%p\n",a);
    system("COLOR 02");
    // entrada    
	for(i=0;i<TAM;i++){
        printf("\n----%i----\n\n",i+1);
        printf("Digite o nome: ");
        gets(a[i].nome);
        fflush(stdin);
        printf("Digite a idade: ");
        scanf("%i",&a[i].idade);
        fflush(stdin);
    }
}
void saida (Pessoa *b){
    int i;
    printf("%p\n",b);
    system("COLOR 02");
    // saída    
	printf("\nNome\t\tIdade\n\n");
    for(i=0;i<TAM;i++){
        printf("%s\t\t%i\n",b[i].nome,b[i].idade);
    }
}