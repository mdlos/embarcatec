#include <stdio.h>

// Função para exibir o menu e obter a escolha do usuário
int exibirMenu() {
    int escolha;
    printf("Escolha uma conversão:\n");
    printf("1. Quilograma para Grama\n");
    printf("2. Quilograma para Tonelada\n");
    printf("3. Grama para Quilograma\n");
    printf("4. Grama para Tonelada\n");
    printf("5. Tonelada para Quilograma\n");
    printf("6. Tonelada para Grama\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &escolha);
    return escolha;
}

// Função principal
int main() {
    int escolha;
    float valor, resultado;

    escolha = exibirMenu();

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch (escolha) {
        case 1:
            resultado = valor * 1000; // Quilograma para Grama
            printf("%.2f kg é igual a %.2f g\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 1000; // Quilograma para Tonelada
            printf("%.2f kg é igual a %.2f toneladas\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 1000; // Grama para Quilograma
            printf("%.2f g é igual a %.2f kg\n", valor, resultado);
            break;
        case 4:
            resultado = valor / 1000000; // Grama para Tonelada
            printf("%.2f g é igual a %.2f toneladas\n", valor, resultado);
            break;
        case 5:
            resultado = valor * 1000; // Tonelada para Quilograma
            printf("%.2f toneladas é igual a %.2f kg\n", valor, resultado);
            break;
        case 6:
            resultado = valor * 1000000; // Tonelada para Grama
            printf("%.2f toneladas é igual a %.2f g\n", valor, resultado);
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
