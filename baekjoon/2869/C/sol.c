#include <stdio.h>
#include <math.h>

int main() {
    int a, b, v, day;

    scanf("%d%d%d", &a, &b, &v);

    day = (double) ceil( (double) (v - a) / (a - b) ) + 1;
    printf("%d\n", day);

    return 0;
}