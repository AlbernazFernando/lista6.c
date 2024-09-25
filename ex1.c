#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validar_senha(const char *senha) {
    int tem_numero = 0;
    int tem_maiuscula = 0;
    int tem_minuscula = 0;
    int comprimento = strlen(senha);

    if (comprimento < 8 || comprimento > 100) {
        return 0; 
    }

    for (int i = 0; i < comprimento; i++) {
        if (isdigit(senha[i])) {
            tem_numero = 1;
        } else if (isupper(senha[i])) {
            tem_maiuscula = 1;
        } else if (islower(senha[i])) {
            tem_minuscula = 1;
        }
    }

    return tem_numero && tem_maiuscula && tem_minuscula; 
}

int main() {
    char senha[101]; 

    printf("Digite uma senha: ");
    fgets(senha, sizeof(senha), stdin);
    
    senha[strcspn(senha, "\n")] = 0;

    if (validar_senha(senha)) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida! A senha deve ter:\n");
        printf("- Mínimo de 8 caracteres\n");
        printf("- Pelo menos um número\n");
        printf("- Pelo menos uma letra maiúscula\n");
        printf("- Pelo menos uma letra minúscula\n");
        printf("- Máximo de 100 caracteres\n");
    }

    return 0;
}
