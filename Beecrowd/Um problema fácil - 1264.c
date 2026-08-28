#include <stdio.h>

int char_para_valor(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if (c >= 'a' && c <= 'z') return c - 'a' + 36;
    return -1;
}

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\r' || c == ' ') continue;

        int soma = 0;
        int max_digito = 0;

        while (c != '\n' && c != '\r' && c != EOF) {
            int val = char_para_valor((char)c);
            if (val != -1) {
                soma += val;
                if (val > max_digito) {
                    max_digito = val;
                }
            }
            c = getchar();
        }

        int base_minima = max_digito + 1;
        if (base_minima < 2) {
            base_minima = 2;
        }

        int encontrou = 0;
        for (int base = base_minima; base <= 62; base++) {
            if (soma % (base - 1) == 0) {
                printf("%d\n", base);
                encontrou = 1;
                break;
            }
        }

        if (!encontrou) {
            printf("such number is impossible!\n");
        }
    }

    return 0;
}