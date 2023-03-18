#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int *n);

int main (){
	
	int numero;
	
	printf("digite um numero: ");
	scanf("%i", &numero);
	
	printf("o fatorial e de: %i \n", fatorial(&numero));
	
	
	
	
	return 0;
}

int fatorial(int *n){
	int i, f=1;
	
	for(i=1; i<=*n; i++){
		f*=i;
	}
	return f;
}