#include <stdio.h>

#define MAX 30

void calculateComb(int combination[][MAX]) {
    combination[0][0] = 1;

    for (int i=1; i<MAX; i++) {
        for (int j=0; j<=i; j++) {
            if (j == 0) combination[i][j] = combination[i-1][j];
            else if (j == i) combination[i][j] = combination[i-1][j-1];
            else combination[i][j] = combination[i-1][j-1] + combination[i-1][j];
        }
    }
}

int main() {
    int test_num;
    int n, m, combination[MAX][MAX];

    calculateComb(combination);

    scanf("%d", &test_num);
    for (int i=0; i<test_num; i++) {
        scanf("%d %d", &n, &m);

        printf("%d\n", combination[m][n]);
    }

    return 0;
}