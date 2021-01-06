#include <stdio.h>

int solve(int n) {
    int five_num, two_num, total_num;
    int remainder;

    five_num = n / 5;
    remainder = n % 5;
    while (remainder%2 != 0 && five_num > 0) {
        five_num--;
        remainder += 5;
    }

    if (remainder%2 == 0) {
        two_num = remainder / 2;
        total_num = two_num + five_num;
    }
    else
        total_num = -1;
    return total_num;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", solve(n));

    return 0;
}