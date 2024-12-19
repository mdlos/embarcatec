#include <stdio.h>

// Funções para conversão de unidades
void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura();
void converterVelocidade();
void converterPotencia();
void converterArea();

int main() {
    int opcao;

    do {
        // Menu de opções
        printf("\n=== CONVERSOR DE UNIDADES ===\n");
        printf("1. Unidades de Comprimento\n");
        printf("2. Unidades de Massa\n");
        printf("3. Unidades de Volume\n");
        printf("4. Unidades de Temperatura\n");
        printf("5. Unidades de Velocidade\n");
        printf("6. Potencia (Watts, Quilowatts, Cavalos-vapor)\n");
        printf("7. Unidades de Area\n");
        printf("8. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Chama a função de acordo com a opção
        switch (opcao) {
            case 1: converterComprimento(); break;
            case 2: converterMassa(); break;
            case 3: converterVolume(); break;
            case 4: converterTemperatura(); break;
            case 5: converterVelocidade(); break;
            case 6: converterPotencia(); break;
            case 7: converterArea(); break;
            case 8: printf("Encerrando o programa...\n"); break;
            default: printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 8);

    return 0;
}

// Funções de conversão
void converterComprimento() {
    double valor;
    int opcao;

    printf("\n--- Conversor de Comprimento ---\n");
    printf("1. Metros para Centimetros\n");
    printf("2. Metros para Milimetros\n");
    printf("3. Centimetros para Metros\n");
    printf("4. Milimetros para Metros\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf metros = %.2lf centimetros\n", valor, valor * 100); break;
        case 2: printf("%.2lf metros = %.2lf milimetros\n", valor, valor * 1000); break;
        case 3: printf("%.2lf centimetros = %.2lf metros\n", valor, valor / 100); break;
        case 4: printf("%.2lf milimetros = %.2lf metros\n", valor, valor / 1000); break;
        default: printf("Opcao invalida!\n");
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
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf kg = %.2lf g\n", valor, valor * 1000); break;
        case 2: printf("%.2lf kg = %.2lf toneladas\n", valor, valor / 1000); break;
        case 3: printf("%.2lf g = %.2lf kg\n", valor, valor / 1000); break;
        case 4: printf("%.2lf toneladas = %.2lf kg\n", valor, valor * 1000); break;
        default: printf("Opcao invalida!\n");
    }
}

void converterVolume() {
    double valor;
    int opcao;

    printf("\n--- Conversor de Volume ---\n");
    printf("1. Litros para Mililitros\n");
    printf("2. Mililitros para Litros\n");
    printf("3. Metros Cubicos para Litros\n");
    printf("4. Litros para Metros Cubicos\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf L = %.2lf mL\n", valor, valor * 1000); break;
        case 2: printf("%.2lf mL = %.2lf L\n", valor, valor / 1000); break;
        case 3: printf("%.2lf m^3 = %.2lf L\n", valor, valor * 1000); break;
        case 4: printf("%.2lf L = %.2lf m^3\n", valor, valor / 1000); break;
        default: printf("Opcao invalida!\n");
    }
}

void converterTemperatura() {
    double valor;
    int opcao;

    printf("\n--- Conversor de Temperatura ---\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf C = %.2lf F\n", valor, (valor * 9/5) + 32); break;
        case 2: printf("%.2lf F = %.2lf C\n", valor, (valor - 32) * 5/9); break;
        case 3: printf("%.2lf C = %.2lf K\n", valor, valor + 273.15); break;
        default: printf("Opcao invalida!\n");
    }
}

void converterVelocidade() {
    double valor;
    int opcao;

    printf("\n--- Conversor de Velocidade ---\n");
    printf("1. Km/h para m/s\n");
    printf("2. m/s para Km/h\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf km/h = %.2lf m/s\n", valor, valor / 3.6); break;
        case 2: printf("%.2lf m/s = %.2lf km/h\n", valor, valor * 3.6); break;
        default: printf("Opcao invalida!\n");
    }
}

void converterPotencia() {
    double valor;
    int opcao;

    printf("\n--- Conversor de Potencia ---\n");
    printf("1. Watts para Quilowatts\n");
    printf("2. Quilowatts para Watts\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf W = %.2lf kW\n", valor, valor / 1000); break;
        case 2: printf("%.2lf kW = %.2lf W\n", valor, valor * 1000); break;
        default: printf("Opcao invalida!\n");
    }
}

void converterArea() {
    double valor;
    int opcao;

    printf("\n--- Conversor de Area ---\n");
    printf("1. Metros quadrados para Centimetros quadrados\n");
    printf("2. Centimetros quadrados para Metros quadrados\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: printf("%.2lf m^2 = %.2lf cm^2\n", valor, valor * 10000); break;
        case 2: printf("%.2lf cm^2 = %.2lf m^2\n", valor, valor / 10000); break;
        default: printf("Opcao invalida!\n");
    }
}
