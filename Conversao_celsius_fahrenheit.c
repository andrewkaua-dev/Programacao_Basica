
#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fahrenheit;
    char resposta;

    do {
        printf("Digite a temperatura em Celsius: ");

        if (scanf("%f", &celsius) != 1) {
            printf("Entrada invalida. Digite um numero.\n");
            return 1;
        }

        fahrenheit = celsiusParaFahrenheit(celsius);

        printf("Aqui esta a temperatura em Fahrenheit: %.2f\n", fahrenheit);

        printf("Deseja converter outra temperatura? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta == 's' || resposta == 'S');

    printf("Ate mais tarde! :)\n");

    return 0;
}
