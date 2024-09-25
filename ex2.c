#include <stdio.h>
#include <string.h>

int calcular_tamanho_manual(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[101]; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    int tamanho_strlen = strlen(str);

    int tamanho_manual = calcular_tamanho_manual(str);

    printf("Tamanho calculado com strlen: %d\n", tamanho_strlen);
    printf("Tamanho calculado manualmente: %d\n", tamanho_manual);

    if (tamanho_strlen == tamanho_manual) {
        printf("Os resultados são iguais!\n");
    } else {
        printf("Os resultados são diferentes!\n");
    }

    return 0;
}
