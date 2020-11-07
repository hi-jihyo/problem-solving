#include <stdio.h>
#include <math.h>

int main() {
    int n, target, count=0;
    int isPrimeNum[1001] = { 0, }, tmp;

    isPrimeNum[1] = 0;
    isPrimeNum[2] = isPrimeNum[3] = 1;
    for (int i=4; i<1001; i++) {
        for (int j=2; j<=(tmp = (int)sqrt(i)); j++) {
            if (i%j == 0) break;
            if (j+1 > tmp) isPrimeNum[i] = 1;
        }
    }

    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &target);

        if (isPrimeNum[target]) count++;
    }
    printf("%d\n", count);
    
    return 0;
}