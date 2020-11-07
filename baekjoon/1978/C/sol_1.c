#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n, target, count=0;
    int isPrimeNum[1001], tmp;

    memset(isPrimeNum, 1, sizeof(isPrimeNum));

    isPrimeNum[1] = 0;
    for (int i=2; i<1001; i++) {
        if (isPrimeNum[i]) {
            for (int j=i*2; j<1001; j+=i)
                isPrimeNum[j] = 0;
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