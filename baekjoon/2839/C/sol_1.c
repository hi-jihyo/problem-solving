#include <stdio.h>
#include <string.h>

#define MAX 5001
#define max(a,b) (a>=b ? a : b)

int solve(int n) {
    int three_num, five_num[MAX], total_num;
    int remainder;

    memset(five_num, -1, (n+1) * sizeof(int));
    
    five_num[3] = 0; five_num[5] = 1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i/2.0; j++) {
            if (five_num[j]>=0 && five_num[i-j]>=0)
                five_num[i] = max(five_num[i], five_num[j] + five_num[i-j]);
        }
    }

    if (five_num[n] >= 0) {
        remainder = n - 5 * five_num[n];
        three_num = remainder / 3;
        total_num = three_num + five_num[n];
    }
    else
        total_num = five_num[n];
    return total_num;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", solve(n));

    return 0;
}