#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void areac (float r, float *a);

int main (){
	float r, a;
	
	printf("digite o raio do curculo: ");
	scanf("%f", &r);
	
	areac (r,&a);
	
	printf("a area e de: %.2f", a);
	
	return 0;
}

void areac (float r, float *a){
	*a = M_PI * pow(r,2);
}