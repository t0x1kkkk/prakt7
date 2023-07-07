#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Введіть координати центру та радіус першого кола (x1 y1 r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("Введіть координати центру та радіус другого кола (x2 y2 r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (d == 0 && r1 == r2) {
        printf("Точок перетину: -1\n");
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("Точок перетину: 0\n");
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("Точок перетину: 1\n");
    } else {
        printf("Точок перетину: 2\n");
    }
    return 0;
}
