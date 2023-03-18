#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 void ordena (int *n);
 void troca (int *a, int *b);
 
int main(void){
	
	int numeros[3], i;
	
	for(i=0; i<3; i++){
		printf("digite %i numero: ", i+1);
		scanf("%i", &numeros[i]);
	}
	
	
	//nao precisa usar o * em numeros pois ele ja e um endereco de memoria
	ordena(numeros);
	
	for (i=0; i<3; i++){
		printf("%i, ", numeros[i]);
	}
	
	return 0;
}


void ordena(int *n){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if (n[i]<n[j]){
				troca(&n[i], &n[j]);
			}
		}
	}
}


void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a=*b;
	*b=aux;
}