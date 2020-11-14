#include <stdio.h>

int main() {
    int test_num;
    int x, y, dist;
    int result;

    scanf("%d", &test_num);
    for (int i=0; i<test_num; i++) {
        scanf("%d %d", &x, &y);

        dist = y - x;
        result = 0;
        for (int j=1; ; j++) {
            if (dist == 0) break;

            if (dist >= j*2) {
                dist -= j*2;
                result += 2;
            }
            else if (dist >= j) {
                dist -= j;
                result += 1;
            }
            else {
                for (int k=j-1; k>0; k--) {
                    if (dist >= k) {
                        result += dist / k;
                        dist %= k;
                    }
                }
            }
        }
        printf("%d\n", result);
    }

    return 0;
}