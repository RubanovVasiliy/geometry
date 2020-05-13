#include <stdio.h>

typedef struct Point {
    int x;
    int y;
} Point;

typedef struct Circle {
    Point p;
    float r;
} Circle;

typedef struct Triangle {
    Point p1;
    Point p2;
    Point p3;
    Point p4;
} Triangle;

void inputElements(char* str);
Circle createCircle();
Triangle createTriangle();