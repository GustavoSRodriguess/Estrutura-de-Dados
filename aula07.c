#include <stdio.h>
#include <stdlib.h>

int fib01(int n);
int big02(int n);


int main (){
	//variaveis 
	int numero;
	
	//entrada de dados 
	printf("digite o valor do numero: ");
	scanf("%i", &numero);
	
	
	//saida 
	printf("o numero e %i\n", fib01(numero));
	printf("o unmero e %i", fib02(numero));
	
	
	return 0;
}


int fib01(int n){
	int ant = 0, atu = 1, i, fib=1;
	
	for (i=1; i<n;i++){
		fib = ant + atu;
		ant=atu;
		atu=fib;
	}
	return fib;
}

int fib02(int n){
	if(n==1 || n==2){
		return 1;
	}else{
		return fib02(n-1)+fib02(n-2);
	}
}