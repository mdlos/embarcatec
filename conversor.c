//Embarcatec 
//Atividade: 
//Discentes: Márcio de Arruda Fonseca.

#include <stdio.h>

void exibirMenu() {
    printf("=== Conversor de Unidades de Comprimento ===\n");
    printf("1. Metro para Centímetro\n");
    printf("2. Metro para Milímetro\n");
    printf("3. Centímetro para Metro\n");
    printf("4. Centímetro para Milímetro\n");
    printf("5. Milímetro para Metro\n");
    printf("6. Milímetro para Centímetro\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

float converterUnidades(int opcao, float valor) {
    switch (opcao) {
        case 1:
            // Metro para Centímetro
            return valor * 100;
        case 2:
            // Metro para Milímetro
            return valor * 1000;
        case 3:
            // Centímetro para Metro
            return valor / 100;
        case 4:
            // Centímetro para Milímetro
            return valor * 10;
        case 5:
            // Milímetro para Metro
            return valor / 1000;
        case 6:
            // Milímetro para Centímetro
            return valor / 10;
        default:
            // Caso inválido
            return 0;
    }
}

int main() {
    int opcao;
    float valor, resultado;

    do {
        exibirMenu();
        scanf("%d", &opcao);
        if (opcao == 0) {
            printf("Encerrando o programa...\n");
            break;
        }
        if (opcao < 0 || opcao > 6) {
            printf("Opção inválida! Tente novamente.\n\n");
            continue;
        }

        printf("Digite o valor para conversão: ");
        scanf("%f", &valor);

        resultado = converterUnidades(opcao, valor);

        printf("Resultado da conversão: %.2f\n\n", resultado);

    } while (opcao != 0);

    return 0;
}


