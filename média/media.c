#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float nota[3], media;

    do
    {
        nota[0] = get_float("Digite a primeira nota: \n");
    } while (nota[0] < 0 || nota[0] > 10);

        do
    {
        nota[1] = get_float("Digite a segunda nota: \n");
    } while (nota[1] < 0 || nota[1]> 10);

   do
    {
        nota[2] = get_float("Digite a terceira nota: \n");
    } while (nota[2] < 0 || nota[2] > 10);

    media = (nota[0] + nota[1] + nota[2]) / 3.0;

    printf("A média do aluno é %2f \n", media);
}