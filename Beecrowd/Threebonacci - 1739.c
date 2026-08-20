#include <stdio.h>

int temTres(long long num){
    while(num != 0){
        if (num % 10 == 3)
            return 1;
        num = num /10;
    }
    return 0;
}

int main(){
    int N;
    while (scanf("%d", &N) != EOF)
    {
        long long num1 = 1;
        long long num2 = 2;  //valores iniciais da sequencia de Fibonacci
        int posicao = 0;
        long long atual;
        //para determinar se um numero pertence a sequencia de threebonacci, precisamos percorrer a sequencia
        //tradicional de fibonacci e computar aqueles que se encaixam nos critérios
        while (posicao != N){
            atual = num1 + num2;
            num1 = num2;
            num2 = atual;
            if (atual % 3 == 0 || temTres(atual) == 1)
            posicao++;
        }
        printf("%lli\n",atual);
    }
    return 0;
}