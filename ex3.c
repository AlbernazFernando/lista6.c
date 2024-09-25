#include <stdio.h>
#include <string.h>

int main() {
    char str[101]; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    int comprimento = strlen(str);

    printf("String de trás para frente: ");
    for (int i = comprimento - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
