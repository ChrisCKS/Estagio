#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int indice = 13;
	int soma = 0;
	int k = 0;
	
	while(k < indice){
		k = k + 1;
		soma = soma + k;
	}
	
	printf("Soma: %i" , soma);
	return 0;
	
	//A VARIAVEL SOMA VALER� 91
}

