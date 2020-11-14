#include <stdio.h>

int main() {
    int test_num;
    int k, n;
    int table[15][15] = { 0, };
    
    for (int i=0; i<15; i++) {
        for (int j=1; j<15; j++) {
            if (i == 0) table[i][j] = j;
            else if (j == 1) table[i][j] = 1;
            else table[i][j] = table[i][j-1] + table[i-1][j];
        }
    }

    scanf("%d", &test_num);
    for (int i=0; i<test_num; i++) {
        scanf("%d%d", &k, &n);
        printf("%d\n", table[k][n]);
    }

    return 0;
}