#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

short int arr[MAX];

short int solve(int n) {
    arr[0] = 0; arr[1] = 1;

    for (int i=2; i<=n; i++) {
        if (i-3 >= 0) {
            if (arr[i-3] ^ arr[i-1]) {
                exit(EXIT_FAILURE);
            }
            arr[i] = !(arr[i-3] && arr[i-1]);
        }
        else
            arr[i] = !arr[i-1];
    }

    return arr[n];
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%s\n", (solve(n) ? "SK" : "CY"));

    return 0;
}