#include <stdio.h>
#include <stdlib.h>

void converta(char *t);
 
int main (){
	
	char texto[50];
	
	printf("digite o texto: ");
	gets(texto);
	
	converta(texto);
	
	printf("o texto e %s\n", texto);
	
	return 0;
}

void converta(char *t){
	int i=0;
	while (t[i]!='\0'){
		if(t[i]>='a' && t[i]<='z'){
			t[i]-=32;
		}
		i++;
	}
}