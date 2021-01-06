#include <stdio.h>

int solve(int n) {
    int two_num, five_num, total_num;

    if (n == 1 || n == 3)
        return -1;
    
    switch(n % 5) {
        case 0 : two_num = 0; five_num = n / 5;
            break;
        case 1 : two_num = 3; five_num = n / 5 - 1;
            break;
        case 2 : two_num = 1; five_num = n / 5;
            break;
        case 3 : two_num = 4; five_num = n / 5 - 1;
            break;
        case 4 : two_num = 2; five_num = n / 5;
            break;
    }

    total_num = two_num + five_num;
    return total_num;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", solve(n));

    return 0;
}