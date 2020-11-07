#include <stdio.h>

int main() {
    int n, roomCnt=1;
    
    scanf("%d", &n);

    n--;
    while (n > 3 * roomCnt * (roomCnt - 1)) // the number of rooms in the circle of radius k is 3 * k * (k-1) 
        roomCnt++;
    
    printf("%d\n", roomCnt);

    return 0;
}