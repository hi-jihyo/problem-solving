#include <stdio.h>

int main() {
    int n, total_num;
    int three_num, five_num, remainder;

    scanf("%d", &n);

    five_num = n / 5;
    remainder = n % 5;
    three_num = remainder / 3;
    remainder %= 3;
    while (remainder != 0 && five_num > 0) {
        five_num--;
        remainder += 5;
        three_num += remainder / 3;
        remainder %= 3;
    }

    if (remainder == 0) // if n = (five_num) * 5 + (three_num) * 3
        total_num = five_num + three_num;
    else // otherwise
        total_num = -1;
    printf("%d\n", total_num);

    return 0;
}