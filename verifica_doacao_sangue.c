
#include <stdio.h>
#include <time.h>

int main() {
    float peso;
    int ano_nascimento, idade, ano_atual;

    // Pegando o ano atual do sistema
    time_t t = time(NULL);
    struct tm *local = localtime(&t);
    ano_atual = local->tm_year + 1900;

    // Solicitando o peso ao usuario
    printf("Informe seu peso em kg: ");
    scanf("%f", &peso);

    // Solicitando o ano de nascimento
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // Calculando a idade
    idade = ano_atual - ano_nascimento;

    // Verificando se a pessoa esta apta a doar sangue
    if (idade >= 16 && idade <= 69 && peso > 50) {
        printf("Voce esta apto(a) a doar sangue!\n");
    } else {
        printf("Voce nao esta apto(a) a doar sangue.\n");
    }

    return 0;
}
