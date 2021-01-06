#include <stdio.h>

#define MAX 21

int fibo(int n) {
    int arr[MAX];

    arr[0] = 0; arr[1] = 1;
    for (int i=2; i<=n; i++)
        arr[i] = arr[i-1] + arr[i-2];
    
    return arr[n];
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", fibo(n));

    return 0;
}