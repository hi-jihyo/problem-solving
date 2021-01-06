#include <stdio.h>

short solve (int a, int b, int c, int n) {
    short result = 0;

    for (int i=0; i<=n/a; i++)
        for (int j=0; j<=n/b; j++)
            for (int k=0; k<=n/c; k++)
                if (i*a + j*b + k*c == n) {
                    result = 1;
                    break;
                }
    
    return result;
}

int main() {
    int a, b, c, n;

    scanf("%d %d %d %d", &a, &b, &c, &n);

    printf("%d\n", solve(a, b, c, n));

    return 0;
}