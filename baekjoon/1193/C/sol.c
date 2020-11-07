#include <stdio.h>

int main()
{
    int x, num, den; // num : 분자, den : 분모
    int i = 1, j;    // x 는 i 번째 대각선의 j 번째 분수

    scanf("%d", &x);

    while (x > i * (i + 1) / 2)
        i++;
    j = x - i * (i - 1) / 2;

    if (i % 2 == 0)
    {
        num = j;
        den = i - j + 1;
    }
    else
    {
        num = i - j + 1;
        den = j;
    }
    printf("%d/%d\n", num, den);

    return 0;
}