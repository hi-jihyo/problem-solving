#include <stdio.h>
#include <stdlib.h>

#define MAX 1001 // 1 <= n <= 1000

short int arr[MAX];

// solve(n) : n 개의 돌이 주어졌을 경우 상근이의 승리 여부를 반환하는 함수
short int solve(int n) {
    arr[0] = 1; arr[1] = 0;

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