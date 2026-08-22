#include <stdio.h>
#include <math.h>

int main(){
    int C;
    scanf("%d", &C);
    for (int i = 0; i < C; i++)
    {
        int digitos=0;
        int N,M; long long valor = 1;
        scanf("%d %d", &N, &M);
        //Ao tentar utilizar um loop while para calcular o N^M para posteriormente atraves de um loop /=10, 
        //o formato unsigned long long ainda não era o suficiente para casos extremos como 100^100, fazendo assim
        //necessário usar essa formula de M log10(N) + 1 para obter o total de digitos
        digitos = (M * log10(N))+1; 
        printf("%d\n", digitos);
    }
    return 0;
}