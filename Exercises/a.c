#include <stdio.h>

void encontraExtremos(int *vetor, int tamanho, int **menor, int **maior){
    *menor = vetor;
    *maior = vetor;
    for (int *atual = vetor + 1; atual < vetor + tamanho; atual++)
    {
        if ( *atual > **maior)
            *maior = atual;
        if (*atual < **menor)
            *menor = atual;
    }
}

int main(){
    int vetor[5] = {15,3,9,21,7};
    int *maior;
    int *menor;
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    encontraExtremos(vetor, tamanho, &maior, &menor);
    printf("Maior: %d \nMenor: %d\n",*maior,*menor);
}