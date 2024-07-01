#include <stdio.h>
#include <math.h>

int findIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    if (x1 == x2 && y1 == y2 && r1 == r2) {
        return -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        return 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radii of the circles (x1 y1 r1 x2 y2 r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int result = findIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("The number of intersection points is: %d\n", result);

    return 0;
}
