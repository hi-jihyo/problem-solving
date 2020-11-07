#include <stdio.h>

int main()
{
    long int a, b, c, bePoint;

    scanf("%ld%ld%ld", &a, &b, &c);

    if (b < c)
        bePoint = a / (c - b) + 1;
    else
        bePoint = -1;
    printf("%ld\n", bePoint);

    return 0;
}