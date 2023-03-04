#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma (float x, float y, float *r);
void diferenca (float x, float y, float *r);
void mult (float x, float y, float *r);


int main (){
	
	int c;
	float x,y,r;
	
	printf("digite um numero: ");
	scanf("%f",&x);
	
	printf("digite outro numero: ");
	scanf("%f", &y);
	
	printf("escolha a opcao\n");
	printf("1-adicao\n");
	printf("2-diferneca\n");
	printf("3-multiplicacao\n");
	scanf("%i", &c);
	
		
	switch (c){
		
		case 1:{
			soma (x,y,&r);
			printf(" a soma e : %f", r);
			break;
		}
		
		case 2:{
			diferenca(x,y,&r);
			printf("a diferenca e: %f", r);
			break;
		}
		
		case 3:{
			mult(x,y,&r);
			printf("a diferenca e: %f", r);
			break;
		}
		
		default :break;
		
		
		
	}
	
	
	return 0;
}

void soma (float x, float y, float *r){
	*r = x + y;
}

void diferenca (float x, float y, float *r){
	*r = x - y;
}

void mult (float x, float y, float *r){
	*r = x*y;
}



