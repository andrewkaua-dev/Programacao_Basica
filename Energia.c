
#include <stdio.h>

int main() {
    int tipo; // 1 = Residencial, 2 = Comercial, 3 = Industrial
    float consumo, valor;

    // Entrada do tipo de consumidor
    printf("Digite o tipo de consumidor:\n");
    printf("1 - Residencial\n");
    printf("2 - Comercial\n");
    printf("3 - Industrial\n");
    printf("Opcao: ");
    scanf("%d", &tipo);

    // Entrada do consumo em kWh
    printf("Digite o consumo de energia em kWh: ");
    scanf("%f", &consumo);

    // Verifica o tipo e calcula
    if (tipo == 1) {
        valor = consumo * 0.20;
        printf("Tipo: Residencial\n");
    } else if (tipo == 2) {
        valor = consumo * 0.35;
        printf("Tipo: Comercial\n");
    } else if (tipo == 3) {
        valor = consumo * 1.50;
        printf("Tipo: Industrial\n");
    } else {
        printf("Tipo de consumidor invalido!\n");
        return 1;
    }

    printf("Valor da conta de energia: R$ %.2f\n", valor);

    return 0;
}
