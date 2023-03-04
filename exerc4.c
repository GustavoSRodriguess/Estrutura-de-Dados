//ponteiros
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacao (float a ,float b, float c, float *x1, float *x2);



int main (){
	float a, b, c, x1, x2;
	
	printf("digite a: ");
	scanf("%f",&a);
	printf("digite b: ");
	scanf("%f",&b);
	printf("digite c: ");
	scanf("%f",&c);
	
	//ta passando o endereco de x1 e x2 e & é a coordenada do x1 e do x2
	equacao(a,b,c, &x1,&x2);
	
	printf("X1 = %f",x1);
	printf("X2 = %f",x2);
	
	return 0;
}

void equacao (float a ,float b, float c, float *x1, float *x2){
	float d = pow(b,2)-4*a*c;
	//precisa do * pois aqui é ponteiro
	*x1=(-b+sqrt(d))/2*a;
	*x2=(-b-sqrt(d))/2*a;
	
}