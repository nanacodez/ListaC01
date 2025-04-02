#include <stdio.h>
#define TOTAL 780000.00f

int main() {
    float total, primeiro_ganhador, segundo_ganhador, valor_primeiro, valor_segundo, valor_restante;
    total = TOTAL;
    primeiro_ganhador = 46.0f;
    segundo_ganhador = 32.0f;
    valor_primeiro = (primeiro_ganhador / 100) * total;
    valor_segundo = (segundo_ganhador / 100) * total;
    valor_restante = total - valor_primeiro - valor_segundo;

    printf("Primeiro ganhador recebera R$ %.2f (%.2f%% do total)\n", valor_primeiro, primeiro_ganhador);
    printf("Segundo ganhador recebera R$ %.2f (%.2f%% do total)\n", valor_segundo, segundo_ganhador);
    printf("Terceiro ganhador recebera R$ %.2f (%.2f%% do total)\n", valor_restante, 100 - primeiro_ganhador - segundo_ganhador);

    return 0;
}
