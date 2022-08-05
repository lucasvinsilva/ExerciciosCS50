#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <fenv.h>


int main(void)
{
    float troco;

    do
    {
        troco = get_float("Qual valor do troco: ");
    } while (troco <= 0);
    int centavos = round(troco * 100);
    printf("%d centavos\n", centavos);
    if(centavos >= 25)
    {
      int moeda = centavos/25;
      printf("%i moedas de 25 centavos\n", moeda);

      float resto25 = centavos%25;
      int moeda10 = resto25/10;
    printf("%i moedas de 10 centavos\n", moeda10);
    int resto2_5 = resto25;

    float resto10 = resto2_5%10;
    int moeda05 = resto10/5;
    printf("%i moedas de 05 centavos\n", moeda05);
    int resto1_0 = resto10;

    float resto05 = resto1_0%5;
    int moeda01 = resto05/1;
    printf("%i moedas de 01 centavos\n", moeda01);

    int total = moeda + moeda10 + moeda05 + moeda01;
    printf("\n%i moedas no total\n", total);
    }

}