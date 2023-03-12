#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    
    len = strlen(str) - 1;
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
    }
    
    printf("String invertida: %s\n", str);
    
    return 0;
}

