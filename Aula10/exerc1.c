#include <stdio.h>
#include <stdlib.h>

void entrada (float *n);
float media (float *n);


int main (){
	
	float n[6];
	
	//entrada 
	entrada(n);
	printf("A media e de %f", media(n));
	
	return 0;
}

void entrada (float *n){
	int i;
	for (i=0; i<6; i++){
		printf("digite %i numero: ",i+1);
		scanf("%f",&n[i]);
	}
}

float media (float *n){
	float m=0;
	int i;
	
	for (i=0; i<6; i++){
		m+=n[i];
	}
	return m/6;
	
}
	
