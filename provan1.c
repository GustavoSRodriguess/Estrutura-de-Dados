#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10000

void intercala(int x[], int inicio, int fim, int meio, int *qtd_trocas, int *qtd_comparacoes);
void merge(int x[], int inicio, int fim, int *qtd_trocas, int *qtd_comparacoes);
void geraNumero(int *vet, int op);
void imprimirVetor(int *vet, int *qtd_trocas, int *qtd_comparacoes, float tempo_execucao);


int main (){
	
	int x[TAMANHO];
	
	srand(time(0));
	
	geraNumero(x,3 );
	
	int qtd_trocas = 0;
    int qtd_comparacoes = 0; 
    
    clock_t inicio = clock();
    merge(x, 0, TAMANHO - 1, &qtd_trocas, &qtd_comparacoes);
    clock_t fim = clock();
    float tempo_execucao = (float)(fim - inicio) / CLOCKS_PER_SEC;
    
    imprimirVetor(x,qtd_trocas, qtd_comparacoes, tempo_execucao);
    
    return 0;
}




void geraNumero(int *vet, int op)
{
    int i, j;

    switch (op)
    {
    case 1: // Ordenados
        for (i = 0; i < TAMANHO; i++)
        {
            vet[i] = i + 1;
        }
        break;

    case 2: // Invertidos
        for (i = 0; i < TAMANHO; i++)
        {
            vet[i] = TAMANHO - i;
        }
        break;

    case 3: // Aleat�rios
        for (i = 0; i < TAMANHO; i++)
        {
            vet[i] = (int)(rand() % TAMANHO);
        }
        break;
    }
}

void merge(int x[], int inicio, int fim, int *qtd_trocas, int *qtd_comparacoes) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        merge(x, inicio, meio, qtd_trocas, qtd_comparacoes);
        merge(x, meio + 1, fim, qtd_trocas, qtd_comparacoes);
        intercala(x, inicio, fim, meio, qtd_trocas, qtd_comparacoes);
    }
}

void intercala(int x[], int inicio, int fim, int meio, int *qtd_trocas, int *qtd_comparacoes) {
    int poslivre = inicio, iniciovetor1 = inicio, iniciovetor2 = meio + 1, i;
    int aux[TAMANHO];

    while (iniciovetor1 <= meio && iniciovetor2 <= fim) {
    	
    	(*qtd_comparacoes)++;
        if (x[iniciovetor1] <= x[iniciovetor2]) {
            aux[poslivre] = x[iniciovetor1];
            iniciovetor1++;
        } else {
            aux[poslivre] = x[iniciovetor2];
            iniciovetor2++;
            //(*qtd_trocas)++;
        }
        poslivre++;
	
    }

    for (i = iniciovetor1; i <= meio; i++) {
        aux[poslivre] = x[i];
        poslivre++;
        
    }

    for (i = iniciovetor2; i <= fim; i++) {
        aux[poslivre] = x[i];
        poslivre++;
    }

    for (i = inicio; i <= fim; i++) {
        x[i] = aux[i];
        (*qtd_trocas)++;
    }

}

void imprimirVetor(int *vet, int *qtd_trocas, int *qtd_comparacoes, float tempo_execucao)
{
    //int i;
    printf("Quantidade de comparacoes: %d\n", qtd_comparacoes);
    printf("Quantidade de trocas: %d\n", qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f segundos\n", tempo_execucao);

    /*printf("Vetor Ordenado: ");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    */
}

