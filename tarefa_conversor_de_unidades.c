#include <stdio.h>

// Funções de conversão de unidades

// Conversão de comprimento
float converter_comprimento(float valor, int de_unidade, int para_unidade) {
    if (de_unidade == 1 && para_unidade == 2) {
        return valor * 100;  // metros para centímetros
    } else if (de_unidade == 1 && para_unidade == 3) {
        return valor * 1000; // metros para milímetros
    } else if (de_unidade == 2 && para_unidade == 1) {
        return valor / 100;  // centímetros para metros
    } else if (de_unidade == 3 && para_unidade == 1) {
        return valor / 1000; // milímetros para metros
    }
    return valor;
}

// Conversão de massa
float converter_massa(float valor, int de_unidade, int para_unidade) {
    if (de_unidade == 1 && para_unidade == 2) {
        return valor * 1000;  // quilogramas para gramas
    } else if (de_unidade == 1 && para_unidade == 3) {
        return valor / 1000;  // quilogramas para toneladas
    } else if (de_unidade == 2 && para_unidade == 1) {
        return valor / 1000;  // gramas para quilogramas
    } else if (de_unidade == 3 && para_unidade == 1) {
        return valor * 1000;  // toneladas para quilogramas
    }
    return valor;
}

// Conversão de temperatura
float converter_temperatura(float valor, int de_unidade, int para_unidade) {
    if (de_unidade == 1 && para_unidade == 2) {
        return (valor * 9/5) + 32; // Celsius para Fahrenheit
    } else if (de_unidade == 1 && para_unidade == 3) {
        return valor + 273.15;    // Celsius para Kelvin
    } else if (de_unidade == 2 && para_unidade == 1) {
        return (valor - 32) * 5/9; // Fahrenheit para Celsius
    } else if (de_unidade == 3 && para_unidade == 1) {
        return valor - 273.15;    // Kelvin para Celsius
    }
    return valor;
}

// Função principal
int main() {
    int opcao, de_unidade, para_unidade;
    float valor, resultado;

    printf("Bem-vindo ao Conversor de Unidades!\n");
    printf("Escolha a opcao de conversao:\n");
    printf("1 - Comprimento\n");
    printf("2 - Massa\n");
    printf("3 - Temperatura\n");
    printf("Digite a opcao (1-3): ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    if (opcao == 1) {
        printf("Escolha a unidade de origem (1 - metros, 2 - centímetros, 3 - milímetros): ");
        scanf("%d", &de_unidade);
        printf("Escolha a unidade de destino (1 - metros, 2 - centímetros, 3 - milímetros): ");
        scanf("%d", &para_unidade);
        resultado = converter_comprimento(valor, de_unidade, para_unidade);
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 2) {
        printf("Escolha a unidade de origem (1 - quilogramas, 2 - gramas, 3 - toneladas): ");
        scanf("%d", &de_unidade);
        printf("Escolha a unidade de destino (1 - quilogramas, 2 - gramas, 3 - toneladas): ");
        scanf("%d", &para_unidade);
        resultado = converter_massa(valor, de_unidade, para_unidade);
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 3) {
        printf("Escolha a unidade de origem (1 - Celsius, 2 - Fahrenheit, 3 - Kelvin): ");
        scanf("%d", &de_unidade);
        printf("Escolha a unidade de destino (1 - Celsius, 2 - Fahrenheit, 3 - Kelvin): ");
        scanf("%d", &para_unidade);
        resultado = converter_temperatura(valor, de_unidade, para_unidade);
        printf("Resultado: %.2f\n", resultado);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
