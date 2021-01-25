#include <stdio.h>

int main() {
    int book_num, book_name;
    int max = 0, count = 0;

    scanf("%d", &book_num);
    for (int i=0; i<book_num; i++) {
        scanf("%d", &book_name);

        if (max < book_name)
            max = book_name;
        else if (count < book_name)
            count = book_name;
    }

    printf("%d\n", count);

    return 0;
}