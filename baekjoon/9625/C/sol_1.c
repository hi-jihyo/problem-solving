#include <stdio.h>

#define MAX 46

int a_num, b_num;
void solve(int k) {
    int b_arr[MAX];

    b_arr[0] = 0;
    b_arr[1] = 1;
    for (int i=2; i<=k; i++)
        b_arr[i] = b_arr[i-1] + b_arr[i-2];

    a_num = b_arr[k-1];
    b_num = b_arr[k];
}

int main() {
    int k;

    scanf("%d", &k);

    solve(k);
    printf("%d %d\n", a_num, b_num);

    return 0;
}