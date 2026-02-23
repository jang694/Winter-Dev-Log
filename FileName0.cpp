#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct point
{
    int x;
    int y;
}POINT;
typedef struct circle {
    POINT center;
    double radius;
}CIRCLE;
typedef struct rect {
    POINT lb;
    POINT rt;
}RECT;


double dist(struct point p1, struct point p2) {
    double d;
    d = sqrt(((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y)));
    return d;
}


int main() {
    
    CIRCLE c1 = { {10,10}, 4.5 };
    CIRCLE c2;
    c2.radius = 5.5;
    c2.center.x = 10;
    c2.center.y = 20;
    POINT point = { 10,15 };
    double d;

    printf("CIRCLE = (%d, %d), r: %f\n", c1.center.x, c1.center.y, c1.radius);
    printf("CIRCLE = (%d, %d), r: %f\n", c2.center.x, c2.center.y, c2.radius);
    printf("point = (%d, %d)\n", point.x, point.y);

    d = dist(c1.center, point);
    if (d <= c1.radius) {
        printf("c1원 안에 있습니다.\n");
    }
    else {
        printf("c1원 밖에 있습니다.\n");
    }

    d = dist(c2.center, point);
    if (d <= c2.radius) {
        printf("c2원 안에 있습니다.\n");
    }
    else {
        printf("c2원 밖에 있습니다.\n");
    }

    return 0;
}
