#include <stdio.h>

#define MAX 1000

int meet_num, vac_len;
int meet_value[MAX];

int solve() {
    int sad_days = vac_len;
    int total_sad = 0;

    for (int i=0; i<meet_num; i++) {
        sad_days -= meet_value[i] + 1;
    }

    for (int i=1; sad_days>0; i++) {
        if (sad_days >= meet_num + 1) {
            total_sad += i * i * (meet_num+1);
            sad_days -= meet_num + 1;
        }
        else {
            total_sad += i * i * sad_days;
            sad_days -= sad_days;
        }
    }

    return total_sad;
}

int main() {
    scanf("%d %d", &meet_num, &vac_len);
    for (int i=0; i<meet_num; i++) {
        scanf("%d", &meet_value[i]);
    }

    printf("%d\n", solve());

    return 0;
}