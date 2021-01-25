#include <stdio.h>

int solve(int start, int end) {
    int gap = start - end;
    return (gap >= 0 ? gap : 0);
}

int main() {
    int fan_num;
    int start, end;
    int end_of_first = 100001, start_of_last = 0;

    scanf("%d", &fan_num);
    for (int i=0; i<fan_num; i++) {
        scanf("%d %d", &start, &end);
        if (start > start_of_last)
            start_of_last = start;
        if (end < end_of_first)
            end_of_first = end;
    }

    printf("%d\n", solve(start_of_last, end_of_first));

    return 0;
}