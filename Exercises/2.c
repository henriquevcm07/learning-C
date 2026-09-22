#include <stdio.h>
#include <stdlib.h>
int contarDigitos(int num){
    if (num < 10){
        return 1;
    }
    return 1+contarDigitos(num/10);
}
int *numParaVetor(int num, int tamanho, int*vetor){
    int i = 0;
    for (int i = 0; i < tamanho; i++)
    {
        //todo: Função de converter para vetor
        vetor[tamanho - i - 1] = num %10;
        num = num/10;
    }
}
int temPropriedade(int num, int tamanho){
    int* vetor = malloc(sizeof(int)*tamanho);
    if(vetor == NULL){
        puts("falha ao alocar memória");
    }
    numParaVetor(num, tamanho, vetor);
    int Concat = vetor[0]*1000+vetor[1]*100+vetor[tamanho-2]*10+vetor[tamanho-1];
    int Produto = ((vetor[0]*10 + vetor[1])+(vetor[tamanho-2]*10+vetor[tamanho-1]))*((vetor[0]*10 + vetor[1])+(vetor[tamanho-2]*10+vetor[tamanho-1]));
    printf("%d e %d\n", Produto,Concat);
    if (Produto == Concat){
        free(vetor);
        return 1;
    }
    free(vetor);
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    int tamanho = contarDigitos(num);
    if (temPropriedade(num,tamanho) == 1){
        printf("%d tem a propriedade",num);
    } else
        printf("%d não tem a propriedade", num);
}