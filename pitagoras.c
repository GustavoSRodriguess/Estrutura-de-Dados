#include <stdio.h>
#include <stdlib.h>

int pitagoras(int x){
	if (x==1){
	 return 1;
	}else{
		return x + pitagoras(x-1);
	}
}


int main (){
	int cont, x;
	
	printf("fala um numero: ");
	scanf("%i", &x);
	
	printf("%i esta na %i posicao de pitagoras", pitagoras(x),x);
	/*for(int i=1; i<= 8;i++){
		printf("%d ", pitagoras(i));
	}
	*/
	
	
}