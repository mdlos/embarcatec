#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    float nota1, nota2, nota3, media;
    FILE *arquivo;

    // Abre o arquivo CSV em modo de escrita, cria se não existir
    arquivo = fopen("alunos.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve o cabeçalho no arquivo
    fprintf(arquivo, "Nome,Nota1,Nota2,Nota3,Media\n");

    while (1) {
        printf("Digite o nome do aluno (ou -1 para sair): ");
        scanf(" %49[^\n]", nome);  // Lê o nome do aluno, aceita espaços

        if (strcmp(nome, "-1") == 0) {
            break;  // Sai do loop se o nome for "-1"
        }

        // Lê as notas das atividades
        printf("Digite a nota da atividade 1 (0 a 10): ");
        scanf("%f", &nota1);

        printf("Digite a nota da atividade 2 (0 a 10): ");
        scanf("%f", &nota2);

        printf("Digite a nota da atividade 3 (0 a 10): ");
        scanf("%f", &nota3);

        // Calcula a média
        media = (nota1 + nota2 + nota3) / 3.0;

        if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10 || media < 0 || media > 10) {
            printf("Erro: Notas devem estar entre 0 e 10.\n");
            continue; 
        }

        fprintf(arquivo, "%s,%.2f,%.2f,%.2f,%.2f\n", nome, nota1, nota2, nota3, media);

        printf("Aluno %s registrado com media %.2f.\n\n", nome, media);
    }

    fclose(arquivo);
    printf("As informações foram salvas no arquivo 'alunos.csv'.\n");

    return 0;
}

