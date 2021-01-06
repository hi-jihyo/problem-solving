#include <stdio.h>

#define MAX 11
#define METHOD_A 1.05
#define METHOD_B 1.20
#define METHOD_C 1.35
#define max(a, b) (a>=b ? a : b)

int solve(int h, int y) {
    int dp[MAX];

    dp[0] = h;
    for (int i=1; i<=y; i++) {
        dp[i] = dp[i-1] * METHOD_A;
        if (i >= 3) dp[i] = max(dp[i], dp[i-3] * METHOD_B);
        if (i >= 5) dp[i] = max(dp[i], dp[i-5] * METHOD_C);
    }

    return dp[y];
}

int main() {
    int h, y;

    scanf("%d %d", &h, &y);

    printf("%d\n", solve(h, y));

    return 0;
}