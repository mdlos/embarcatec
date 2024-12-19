#include <stdio.h>

void converter_tempo(double valor, char unidade_origem, char unidade_destino) {
    double resultado;

    if (unidade_origem == 's') { // Segundos
        if (unidade_destino == 'm') resultado = valor / 60; // Para minutos
        else if (unidade_destino == 'h') resultado = valor / 3600; // Para horas
    } else if (unidade_origem == 'm') { // Minutos
        if (unidade_destino == 's') resultado = valor * 60; // Para segundos
        else if (unidade_destino == 'h') resultado = valor / 60; // Para horas
    } else if (unidade_origem == 'h') { // Horas
        if (unidade_destino == 's') resultado = valor * 3600; // Para segundos
        else if (unidade_destino == 'm') resultado = valor * 60; // Para minutos
    } else {
        printf("Unidade de origem inválida.\n");
        return;
    }

    printf("%.2f %c equivale a %.2f %c\n", valor, unidade_origem, resultado, unidade_destino);
}

int main() {
    double valor;
    char unidade_origem, unidade_destino;

    printf("Digite o valor e a unidade de origem (s para segundos, m para minutos, h para horas):\n");
    scanf("%lf %c", &valor, &unidade_origem);

    printf("Digite a unidade de destino (s para segundos, m para minutos, h para horas):\n");
    scanf(" %c", &unidade_destino);

    converter_tempo(valor, unidade_origem, unidade_destino);

    return 0;
}
