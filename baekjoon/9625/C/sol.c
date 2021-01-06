#include <stdio.h>

#define MAX 46

int a_num, b_num;
void solve(int k) {
    int a_arr[MAX], b_arr[MAX];

    a_arr[0] = 1; b_arr[0] = 0;
    for (int i=1; i<=k; i++) {
        a_arr[i] = b_arr[i-1];
        b_arr[i] = a_arr[i-1] + b_arr[i-1];
    }

    a_num = a_arr[k];
    b_num = b_arr[k];
}

int main() {
    int k;

    scanf("%d", &k);

    solve(k);
    printf("%d %d\n", a_num, b_num);

    return 0;
}