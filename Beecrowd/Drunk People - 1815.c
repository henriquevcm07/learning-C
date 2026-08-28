#include <stdio.h>

int main() {
    int n, t, k, m, h = 1;
    double matriz[105][105];

    while (scanf("%d %d %d %d", &n, &t, &k, &m) == 4 && n != 0) {
        t--;
        k--;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%lf", &matriz[i][j]);
            }
        }

        double prob[105] = {0.0};
        prob[t] = 1.0;

        for (int passo = 0; passo < m; passo++) {
            double novaProb[105] = {0.0};

            for (int i = 0; i < n; i++) {
                if (i == k) continue;

                for (int j = 0; j < n; j++) {
                    novaProb[j] += prob[i] * matriz[i][j];
                }
            }

            for (int i = 0; i < n; i++) {
                prob[i] = novaProb[i];
            }
        }

        double falha = 0.0;
        for (int i = 0; i < n; i++) {
            if (i != k) {
                falha += prob[i];
            }
        }

        printf("Instancia %d\n", h);
        printf("%.6lf\n\n", falha);
        h++;
    }

    return 0;
}