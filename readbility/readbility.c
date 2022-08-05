#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
     string texto = get_string("Digite o texto: ");

     int NumCaracterTexto = 0, NumEspaço = 0, N = 0, cont = 0;

     while (texto[NumCaracterTexto] != '\0')
     { ++NumCaracterTexto;     }


     int NumPalavras = 0, PularEspaçoEmBranco = 0, NumEspaços = 0;

     while (texto[PularEspaçoEmBranco] != '\n' && texto[PularEspaçoEmBranco] != '\0')
     {
          while (texto[PularEspaçoEmBranco] == ' ')
          ++PularEspaçoEmBranco;

          if(texto[PularEspaçoEmBranco] != '\n' && texto[PularEspaçoEmBranco] != '\0'){
               ++NumPalavras;

               while (texto[PularEspaçoEmBranco] != ' ' && texto[PularEspaçoEmBranco] != '\n' && texto[PularEspaçoEmBranco] != '\0')
               ++PularEspaçoEmBranco;
          }
     }
     int PontoFinal = 0, PontoEsclamação = 0, PontoInterrogação = 0, QtdFrases = 0, Pontos = 0;

          while (texto[Pontos] != '\0')
     {
          while (texto[PontoFinal] == '.')
          ++PontoFinal;
          while (texto[PontoEsclamação] == '!')
          ++PontoEsclamação;
          while (texto[PontoInterrogação] == '?')
          ++PontoInterrogação;

          if(texto[PontoFinal] != '\0' || texto[PontoEsclamação] != '\0' || texto[PontoInterrogação] != '\0'){
               ++QtdFrases;

           while (texto[PontoFinal] != '\0')
          ++PontoFinal;
          while (texto[PontoEsclamação] != '\0')
          ++PontoEsclamação;
          while (texto[PontoInterrogação] != '\0')
          ++PontoInterrogação;


       }
     }

     printf("O texto possuí %i caracteres \n", NumCaracterTexto);

     printf("O número de palavras é %i \n", NumPalavras);

     printf("O texto possuí %i ponto(s) final, %i ponto(s) de esclamação e %i pontos de interrogação \n", PontoFinal, PontoEsclamação, PontoInterrogação);

}