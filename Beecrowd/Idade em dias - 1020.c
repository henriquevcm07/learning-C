#include <stdio.h>
 
int main() {
    int entrada;
    scanf("%i", &entrada);
    int anos = entrada/365;
    int resto = entrada%365;
    int meses = resto/30;
    resto = resto%30;
    int dias = resto;
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
    return 0;
}