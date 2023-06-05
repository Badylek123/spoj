#include <stdio.h>

int main() {
    int t;
    scanf("%d",t);
    int x, y;
    char op;
    for (int i = 0; i < t; i++) {
        scanf("%c %d %d", op, x, y);
        printf("%d\n", (op=='+')?x+y:(op=='-')?x-y:(op=='*')?x*y:(op=='/')?x/y:x%y);
    }
    return 0;
}
