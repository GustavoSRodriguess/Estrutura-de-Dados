typedef struct{
	int codigo;
	char nome[50], cor[50];
	float peso, preco;
}Peca;

Peca entrada(void);
void saida(Peca a);

Peca entrada (void){
	Peca a;
	
	printf ("digite o codigo: ");
	scanf("%i", &a.codigo);
	fflush(stdin);
	
	printf("digite o nome: ");
	gets(a.nome);
	fflush(stdin);
	
	printf("digite a cor");
	gets(a.cor);
	fflush(stdin);
	
	printf("digite o preco");
	scanf("%f", &a.preco);
	fflush(stdin);
	
	printf("digite o peso: ");
	scanf("%f", &a.peso);
	fflush(stdin);
	
	return a;
}

void saida (Peca a){
	printf("codigo: %i\n", a.codigo);
	printf("nome: %s\n", a.nome);
	printf("cor: %s\n", a.cor);
	printf("preco: R$ %f\n", a.preco);
	printf("peso: %f\n", a.peso);
}