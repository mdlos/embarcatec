#include <stdio.h>

// Função para conversão de unidades de tempo
void converterTempo();

void mostrarAscii(){
    printf("  _________        .---\"\"\"      \"\"\"---.               \n");
    printf(" :______.-':      :  .--------------.  :              \n");
    printf(" | ______  |      | :                : |              \n");
    printf(" |:______B:|      | |  encerrando    | |              \n");
    printf(" |:______B:|      | |  programa!     | |              \n");
    printf(" |:______B:|      | |                | |              \n");
    printf(" |         |      | |                | |              \n");
    printf(" |:_____:  |      | |   by sara      | |              \n");
    printf(" |    ==   |      | :                : |              \n");
    printf(" |       O |      :  '--------------'  :              \n");
    printf(" |       o |      :'---...______...---'               \n");
    printf(" |       o |-._.-i___/'             \\._               \n");
    printf(" |'-.____o_|   '-.   '-...______...-'  `-._           \n");
    printf(" :_________:      `.____________________   `-.___.-. \n");
    printf("                  .'.eeeeeeeeeeeeeeeeee.'.      :___: \n");
    printf("                 .'.eeeeeeeeeeeeeeeeeeeeee.'.         \n");
    printf("               :____________________________:        \n");

}

int main() {
    int opcao;

    do {
        // Menu de opções
        printf("\n=== CONVERSOR DE UNIDADES DE TEMPO ===\n");
        printf("1. Converter unidades de tempo\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Chama a função de acordo com a opção
        switch (opcao) {
            case 1: converterTempo(); break;
            case 2: mostrarAscii(); break;
            default: printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}

// Função para conversão de tempo
void converterTempo() {
    double valor;
    int opcao;

    printf("\n--- Conversor de Unidades de Tempo ---\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Segundos para Horas\n");
    printf("3. Minutos para Segundos\n");
    printf("4. Minutos para Horas\n");
    printf("5. Horas para Segundos\n");
    printf("6. Horas para Minutos\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf segundos = %.2lf minutos\n", valor, valor / 60); break;
        case 2: printf("%.2lf segundos = %.2lf horas\n", valor, valor / 3600); break;
        case 3: printf("%.2lf minutos = %.2lf segundos\n", valor, valor * 60); break;
        case 4: printf("%.2lf minutos = %.2lf horas\n", valor, valor / 60); break;
        case 5: printf("%.2lf horas = %.2lf segundos\n", valor, valor * 3600); break;
        case 6: printf("%.2lf horas = %.2lf minutos\n", valor, valor * 60); break;
        default: printf("Opcao invalida!\n");
    }
}
