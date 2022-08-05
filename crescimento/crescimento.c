#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int n_inicial_pessoas, n_final_pessoas, n_sugerido_pessoas, contador_ano, total, n1, n2;

    do
    {
        n_inicial_pessoas = get_int("Qual é a quantidade inicial de pessoas?\n");
    }
    while (n_inicial_pessoas < 9);

    do
    {
        n_sugerido_pessoas = get_int("Qual é a quantidade sugerida de pessoas?\n");
    }
    while (n_sugerido_pessoas < n_inicial_pessoas);

    n_final_pessoas = 0;
    contador_ano = 0;

    while(n_final_pessoas < n_sugerido_pessoas)
    {
        n1 = n_inicial_pessoas / 3;
        n2 = n_inicial_pessoas / 4;
        total = n_inicial_pessoas + n1 - n2;

        contador_ano = contador_ano + 1;
        n_final_pessoas = n_final_pessoas + total;
    }

    printf("Irá demorar %d anos para chegar na quantidade sugerida\n", contador_ano);

}