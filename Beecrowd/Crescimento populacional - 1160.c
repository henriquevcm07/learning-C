#include <stdio.h>
 
int main() {
    int T;
    scanf("%d",&T);
    for (int i = 0; i < T;i++){
        int PA,PB;
        float G1,G2;
        scanf("%d %d %f %f", &PA,&PB,&G1,&G2);
        int ano = 0;
        while(PA <= PB && ano <= 100){
            PA  += (int)(PA*G1/100);
            PB  += (int)(PB*G2/100);
            ano += 1;
        }
        if (ano > 100)
            puts("Mais de 1 seculo.");
        else
            printf("%d anos.\n", ano);
    } 
    return 0;
}