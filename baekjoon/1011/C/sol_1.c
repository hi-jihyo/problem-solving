#include <stdio.h>
#include <math.h>

int main() {
    int test_num;
    int x, y;
    double dist;
    int result;

    scanf("%d", &test_num);
    for (int i=0; i<test_num; i++) {
        scanf("%d %d", &x, &y);

        dist = sqrt(y - x);
        if ((int) round(dist) == (int) ceil(dist))
            result = ((int) round(dist))*2 - 1;
        else
            result = dist*2;

        printf("%d\n", result);
    }

    return 0;
}