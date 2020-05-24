#include "func.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

Circle createCircle()
{
    Circle c = {};
    char str[20];
    char s[70] = "circle";
    int code = scanf("%6s(%lf %lf, %lf)", str, &c.p.x, &c.p.y, &c.r);
    printf("%s \n%d circle(%lf %lf, %.4lf) \n", str, code, c.p.x, c.p.y, c.r);
    if (strcmp(s, str)) {
        printf("Error: unknown shape '%s' \n", str);
    } else if (code != 4) {
        printf("Error: invalid input format\n");
    } else {
        c.perimeter = 2 * M_PI * c.r;
        c.square = c.r * c.r * M_PI;
    }
    return c;
}

void print_circle(Circle c)
{
    printf("circle(%lf %lf, %.4lf) \n", c.p.x, c.p.y, c.r);
    printf("perimeter = %.4lf\n", c.perimeter);
    printf("square = %.4lf\n", c.square);
}

int intersec_cir_cir(Circle* c1, Circle* c2)
{
    if (!c1 || !c2)
        return -1;

    if (sqrt(pow(c2->p.x - c1->p.x, 2) + pow(c2->p.y - c1->p.y, 2)) <= (c2->r + c1->r)) {
        return 1;
    } else {
        return 0;
    }

    return -1;
}

double perimeter_cir(Circle* c)
{
    if (!c)
        return -1;
    return 2 * M_PI * c->r;
}

double square_cir(Circle* c)
{
    if (!c) {
        return -1;
    }
    return c->r * c->r * M_PI;
}