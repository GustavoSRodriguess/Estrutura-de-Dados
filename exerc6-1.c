#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	
	int n1, n2;
	
	printf("digite um numero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("digite outro numero: ");
	scanf("%i", &n2);
	fflush(stdin);
	
	printf("a soma dos numeros e: %i\n", soma(&n1, &n2));
	printf("a multiplicacao do numero e: %i\n", multi(&n1, &n2));
	printf("a subtracao e de: %i\n", subtr(&n1, &n2));
	
	return 0;
}
	
	int soma(int *a, int *b){
		return *a + *b;
	}
	
	int multi(int *a, int *b){
		return *a**b;
	}
	
	int subtr(int *a, int *b){
		return *a-*b;
	}
