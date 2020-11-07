#include <stdio.h>

long long int func(long long int a, long long int b, long long int c) {
    if (b == 1) return a % c;

    long long int tmp = func(a, b/2, c);
    tmp = tmp * tmp % c;
    if (b%2 == 0) return tmp;
    else return a * tmp % c;
}

int main() {
    long long int a, b, c;

    scanf("%lld%lld%lld", &a, &b, &c);

    long long int result = func(a, b, c);
    printf("%lld\n", result);

    return 0;
}