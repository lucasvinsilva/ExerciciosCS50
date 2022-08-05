#include <stdio.h>
#include <cs50.h>

int main(void)
{
int n;
do
{
  n = get_int("Qual o tamanho da piramide dupla:");
} while (n <= 1 || n > 8);

if(n == 2)
 {
    printf(" #  #\n##  ##\n");
 }
if(n == 3)
 {
    printf("  #  #\n ##  ##\n###  ###\n");
 }
if(n == 4)
 {
    printf("   #  #\n  ##  ##\n ###  ###\n####  ####");
 }
if(n == 5)
 {
    printf("    #  #\n   ##  ##\n  ###  ###\n ####  ####\n#####  #####");
 }
if(n == 6)
 {
    printf("     #  #\n    ##  ##\n   ###  ###\n  ####  ####\n #####  #####\n######  ######");
 }
if(n == 7)
 {
    printf("      #  #\n     ##  ##\n    ###  ###\n   ####  ####\n  #####  #####\n ######  ######\n#######  #######");
 }
if(n == 8)
 {
    printf("       #  #\n      ##  ##\n     ###  ###\n    ####  ####\n   #####  #####\n  ######  ######\n #######  #######\n########  ########\n");
 }
}