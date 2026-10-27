
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade, grupo_risco;
    int categoria = 0;

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 18 || idade > 70) {
        printf("Idade fora da faixa permitida (18 a 70 anos).\n");
        return 0;
    }

    printf("Digite o grupo de risco (1 - Baixo, 2 - Medio, 3 - Alto): ");
    scanf("%d", &grupo_risco);

    if (grupo_risco < 1 || grupo_risco > 3) {
        printf("Grupo de risco invalido.\n");
        return 0;
    }

    // Calculo da categoria baseado na idade e grupo de risco
    if (idade >= 18 && idade <= 20) {
        categoria = grupo_risco;
    } else if (idade >= 21 && idade <= 30) {
        categoria = grupo_risco + 1 * 3;
    } else if (idade >= 31 && idade <= 40) {
        categoria = grupo_risco + 2 * 3;
    } else if (idade >= 41 && idade <= 60) {
        categoria = grupo_risco + 3 * 3;
    } else if (idade >= 61 && idade <= 70) {
        categoria = grupo_risco + 4 * 3;
    }

    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Categoria: %d\n", categoria);

    return 0;
}
