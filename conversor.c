//Embarcatec 
//Atividade: 
//Discentes: Márcio de Arruda Fonseca.

#include <stdio.h>

void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura();
void converterVelocidade();
void converterPotencia();
void converterArea();
void converterTempo();
void sairMensagem();

int main() {
    int opcao;

    do {

        printf("\n=== CONVERSOR DE UNIDADES ===\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Potência\n");
        printf("7. Área\n");
        printf("8. Tempo\n");
        printf("9. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: converterComprimento(); break;
            case 2: converterMassa(); break;
            case 3: converterVolume(); break;
            case 4: converterTemperatura(); break;
            case 5: converterVelocidade(); break;
            case 6: converterPotencia(); break;
            case 7: converterArea(); break;
            case 8: converterTempo(); break;
            case 9: sairMensagem(); break;
            default: printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 9);

    return 0;
}

void converterComprimento() {
    double valor;
    int opcao;
    printf("\n--- Conversor de Comprimento ---\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Milímetros para Metros\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf metros = %.2lf centímetros\n", valor, valor * 100); break;
        case 2: printf("%.2lf metros = %.2lf milímetros\n", valor, valor * 1000); break;
        case 3: printf("%.2lf centímetros = %.2lf metros\n", valor, valor / 100); break;
        case 4: printf("%.2lf milímetros = %.2lf metros\n", valor, valor / 1000); break;
        default: printf("Opção inválida!\n");
    }
}

void converterMassa() {
    double valor;
    int opcao;
    printf("\n--- Conversor de Massa ---\n");
    printf("1. Quilogramas para Gramas\n");
    printf("2. Quilogramas para Toneladas\n");
    printf("3. Gramas para Quilogramas\n");
    printf("4. Toneladas para Quilogramas\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf kg = %.2lf g\n", valor, valor * 1000); break;
        case 2: printf("%.2lf kg = %.2lf toneladas\n", valor, valor / 1000); break;
        case 3: printf("%.2lf g = %.2lf kg\n", valor, valor / 1000); break;
        case 4: printf("%.2lf toneladas = %.2lf kg\n", valor, valor * 1000); break;
        default: printf("Opção inválida!\n");
    }
}

void converterVolume() {
    double valor;
    int opcao;
    printf("\n--- Conversor de Volume ---\n");
    printf("1. Litros para Mililitros\n");
    printf("2. Mililitros para Litros\n");
    printf("3. Metros Cúbicos para Litros\n");
    printf("4. Litros para Metros Cúbicos\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf L = %.2lf mL\n", valor, valor * 1000); break;
        case 2: printf("%.2lf mL = %.2lf L\n", valor, valor / 1000); break;
        case 3: printf("%.2lf m^3 = %.2lf L\n", valor, valor * 1000); break;
        case 4: printf("%.2lf L = %.2lf m^3\n", valor, valor / 1000); break;
        default: printf("Opção inválida!\n");
    }
}

void converterTemperatura() {
    double valor;
    int opcao;
    printf("\n--- Conversor de Temperatura ---\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf C = %.2lf F\n", valor, (valor * 9/5) + 32); break;
        case 2: printf("%.2lf F = %.2lf C\n", valor, (valor - 32) * 5/9); break;
        case 3: printf("%.2lf C = %.2lf K\n", valor, valor + 273.15); break;
        default: printf("Opção inválida!\n");
    }
}

void converterVelocidade() {
    double valor;
    int opcao;
    printf("\n--- Conversor de Velocidade ---\n");
    printf("1. Km/h para m/s\n");
    printf("2. m/s para Km/h\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf km/h = %.2lf m/s\n", valor, valor / 3.6); break;
        case 2: printf("%.2lf m/s = %.2lf km/h\n", valor, valor * 3.6); break;
        default: printf("Opção inválida!\n");
    }
}

void converterPotencia() {
    double valor;
    int opcao;
    printf("\n--- Conversor de Potência ---\n");
    printf("1. Watts para Quilowatts\n");
    printf("2. Quilowatts para Watts\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf W = %.2lf kW\n", valor, valor / 1000); break;
        case 2: printf("%.2lf kW = %.2lf W\n", valor, valor * 1000); break;
        default: printf("Opção inválida!\n");
    }
}

void converterArea() {
    double valor;
    int opcao;
    printf("\n--- Conversor de Área ---\n");
    printf("1. Metros quadrados para Centímetros quadrados\n");
    printf("2. Centímetros quadrados para Metros quadrados\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf m^2 = %.2lf cm^2\n", valor, valor * 10000); break;
        case 2: printf("%.2lf cm^2 = %.2lf m^2\n", valor, valor / 10000); break;
        default: printf("Opção inválida!\n");
    }
}

void converterTempo() {
    double valor, resultado;
    char unidade_origem, unidade_destino;

    printf("\n--- Conversor de Tempo ---\n");
    printf("Digite o valor e a unidade de origem (s para segundos, m para minutos, h para horas): ");
    scanf("%lf %c", &valor, &unidade_origem);
    printf("Digite a unidade de destino (s para segundos, m para minutos, h para horas): ");
    scanf(" %c", &unidade_destino);

    if (unidade_origem == unidade_destino) {
        resultado = valor;
    } else if (unidade_origem == 's') {
        resultado = (unidade_destino == 'm') ? valor / 60 : valor / 3600;
    } else if (unidade_origem == 'm') {
        resultado = (unidade_destino == 's') ? valor * 60 : valor / 60;
    } else if (unidade_origem == 'h') {
        resultado = (unidade_destino == 's') ? valor * 3600 : valor * 60;
    } else {
        printf("Unidade de origem inválida!\n");
        return;
    }

    printf("Resultado: %.2lf %c\n", resultado, unidade_destino);
}

void sairMensagem() {
    printf("  _________        .---\"\"\"      \"\"\"---.               \n");
    printf(" :______.-':      :  .--------------.  :              \n");
    printf(" | ______  |      | :   Encerrando   : |              \n");
    printf(" |:______B:|      | |    o programa!  | |              \n");
    printf(" |:______B:|      | :                : |              \n");
    printf(" |:______B:|      :  '--------------'  :              \n");
    printf(" |         |      :'---...______...---'               \n");
    printf(" |:_____:  |     |     Equipe:                |        \n");
    printf(" |:_____:  |     | - Marcio                   |       \n");
    printf(" |:_____:  |     | - Alex                     |       \n");
    printf(" |:_____:  |     | - Sara                     |       \n");
    printf(" |:_____:  |     | - Paola                    |       \n");
    printf(" |:_____:  |     | - Pedro                    |       \n");
    printf(" |:_____:  |     | - Jvrsoare                 |       \n");
    printf(" |    ==   |                                        \n");
    printf(" |       O |      Obrigado por utilizar!             \n");
    printf(" |       o |-._.-i___/'             \\._              \n");
    printf(" |'-.____o_|   '-.   '-...______...-'  -._           \n");
    printf(" :_________:      .____________________   -.___.-. \n");
    printf("                  .'.eeeeeeeeeeeeeeeeee.'.      :___:\n");
    printf("                 .'.eeeeeeeeeeeeeeeeeeeeee.'.         \n");
    printf("               :____________________________:        \n");
}
