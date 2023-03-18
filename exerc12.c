#include <stdio.h>
#include <stdlib.h>
#define TAM 4

float media (float *n);

int main (){
	
	float numeros[TAM];
	int i;
	
	for (i=0; i<TAM; i++){
		printf("digite %i: ", i+1);
		scanf("%f", &numeros[i]);
	}
	
	printf("a media e:  %f", media(numeros));
	
	
	return 0;	
}

float media (float *n){
	int i;
	float s=0;
	for(i=0; i<TAM; i++){
		s+=n[i];
	}
	return s/TAM;
}