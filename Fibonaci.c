#include <stdio.h>
#include <stdlib.h>


int main() {
	 int i ,num, a = 0, b = 1, fib = 0, flag = 0 , prox;
    
    printf("Informe um numero inteiro : ");
    scanf("%d", &num);
    
    printf("Sequencia de Fibonacci:\n");
    
    for (i = 0; i < num; i++) {
        if (i <= 1)
            prox = i;
        else {
            prox = a + b;
            a = b;
            b = prox;
        }
        printf("%d \n", prox);
    }
        
    if (num == 0) {
        printf("%d pertence a sequencia de Fibonacci.\n", num);
        return 0;
    }
    
    while (fib <= num) {
        if (num == fib) {
            printf("%d pertence a sequencia de Fibonacci.\n", num);
            flag = 1;
            break;
        }
        fib = a + b;
        a = b;
        b = fib;
    }
    
    if (flag == 0) {
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);
        printf("O proximo da sequencia seria : %i" , fib);
    }	return 0;
    
}
