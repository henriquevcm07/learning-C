#include <stdio.h>

int main(){
    int N, M;
    while(scanf("%d %d", &N, &M) == 2){
    //para "contar" cada dígito do número, é necessário percorrer cada digito, usando divisão e resto por 10
    //em cada número no intervalo entre N e M
    int total = 0;
    for (int i = N; i <= M; i++)
    {
        int num = i; //123
        int array[10] = {0};
        int repetiu = 0;
        while (num != 0 && repetiu == 0){
            int atual = num % 10; //atual = 3, num = 123 || atual = 2, num = 12 || atual = 1, num = 1
            array[atual]++;
            if (array[atual]>1)
                repetiu = 1;
            num = num / 10; //num = 12 || num = 1 || num = 0
        }
        if (repetiu == 0)
            total++;
    }
    printf("%d\n", total);
    }
    return 0;
}