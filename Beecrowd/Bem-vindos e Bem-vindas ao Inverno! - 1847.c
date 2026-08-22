#include <stdio.h>

int main(){
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    int dif1 = B-A;
    int dif2 = C-B;
    if(dif2 > dif1 || (dif1 == dif2 && dif1 > 0))
        puts(":)");
    else
        puts(":(");
}