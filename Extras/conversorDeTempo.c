#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    double valor;
    int opcao;
    printf("\n===== Conversor de Temperatura =====\n");
    printf("Digite 1 - Para converter de Celsius para Fahrenheit;\n");
    printf("Digite 2 - Para converter de Celsius para Kelvin;\n");
    printf("Digite 3 - Para converter de Fahrenheit para Celsius;\n");
    printf("Digite 4 - Para converter de Fahrenheit para Kelvin;\n");
    printf("Digite 5 - Para converter de Kelvin para Celsius;\n");
    printf("Digite 6 - Para converter de Kelvin para Fahrenheit;\n");
    printf("Digite 0 - Para fechar o programa.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor da temperatura em Celsius: ");
        scanf("%lf", &valor);
        printf("%.2lf C = %.2lf F\n", valor, (valor * 9 / 5) + 32);
        break; // Formula: °F = °C × 1,8 + 32
    case 2:
        printf("Digite o valor da temperatura em Celsius: ");
        scanf("%lf", &valor);
        printf("%.2lf C = %.2lf K\n", valor, valor + 273.15);
        break; // Formula: K = °C + 273,15
    case 3:
        printf("Digite o valor da temperatura em Fahrenheit: ");
        scanf("%lf", &valor);
        printf("%.2lf F = %.2lf C\n", valor, (valor - 32) * 5 / 9);
        break; // Formula: °C = (°F - 32) / 1,8
    case 4:
        printf("Digite o valor da temperatura em Fahrenheit: ");
        scanf("%lf", &valor); 
        printf("%.2lf F = %.2lf K\n", valor, (valor + 459.67) / 1.8);
        break; // Formula: (°F + 459,67) / 1,8
    case 5:
        printf("Digite o valor da temperatura em Kelvin: ");
        scanf("%lf", &valor); 
        printf("%.2lf K = %.2lf C\n", valor, valor - 273.15);
        break; // Formula: °C = K - 273,15
    case 6:
        printf("Digite o valor da temperatura em Kelvin: ");
        scanf("%lf", &valor); 
        printf("%.2lf K = %.2lf F\n", valor, (valor * 1.8) - 459.67);
        break; // Formula: °F = K × 1,8 - 459,67
    case 0:
        printf("Até mais!\n");
        break;
    default:
        printf("Opção inválida!\n");
    }
    
    system("pause");
    return 0;
}