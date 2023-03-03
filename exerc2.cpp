#include <stdio.h>
#include <stdlib.h>
#define TAM 3


typedef struct animal{
	char raca[50], cor [50], sexo;
	float peso;
	
}Animal;


int main (void){
	
	//variave a vai ter caracteristicas de animal
	Animal a[TAM];
	int i; //aux
	
	for(i=0; i<TAM; i++){
		printf("digite a raca: ");
		gets(a[i].raca);
		fflush(stdin);
		
		printf("digite a cor: ");
		gets(a[i].raca);
		fflush(stdin);
			
		printf("digite o peso: ");
		scanf("%f",&a[i].peso);
		fflush(stdin);
		
		printf("digite o sexo (M/F): ");
		scanf("%c",&a[i].sexo);
		fflush(stdin);
	}
	printf("Raca \tCor \tPeso \tSexo\n\n");
	for(i=0; i<TAM; i++){
		
		printf("%s \t%s \t%.2f \t%c\n",a[i].raca, a[i].cor, a[i].peso, a[i].sexo);
		
	}
	
	
	return 0;
}