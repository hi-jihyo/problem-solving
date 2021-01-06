#include <stdio.h>

#define MAX 301

short solve (int a, int b, int c, int n) {
    short isPossible[MAX] = { 0, };

    isPossible[a] = isPossible[b] = isPossible[c] = 1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i/2.0; j++) {
            if (isPossible[j] && isPossible[i-j])
                isPossible[i] = 1;
        }
    }
    
    return isPossible[n];
}

int main() {
    int a, b, c, n;

    scanf("%d %d %d %d", &a, &b, &c, &n);

    printf("%d\n", solve(a, b, c, n));

    return 0;
}

// BOJ 의 2gumin14 님의 코드 (https://www.acmicpc.net/source/24675405) 를 참고하여 재작성했습니다.