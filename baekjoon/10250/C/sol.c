#include <stdio.h>

int main() {
    int test_num;
    int width, height, order;
    int floor, room;
    int room_num;

    scanf("%d", &test_num);
    for (int i=0; i<test_num; i++) {
        scanf("%d%d%d", &height, &width, &order);
        
        floor = (order-1) % height + 1;
        room = (order-1) / height + 1; 
        room_num = floor * 100 + room;
        printf("%d\n", room_num);
    }

    return 0;
}