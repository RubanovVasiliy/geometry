#include <stdio.h>
#include <string.h>
#include <math.h>

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

void inputElements(char *str) { // Input set with keyboard
	int c;
	while ((c = getchar()) != '\n') {
		*str++ = c;
	};
	*str = '\0';
}

Circle createCircle(){
  Circle c = {};
  char str[20];
  char s[70] ="circle";
  int code = scanf("%6s(%d %d, %f)",str,&c.p.x,&c.p.y,&c.r);
  printf("%s \n%d circle(%d %d, %.4f) \n",str,code,c.p.x,c.p.y,c.r);
  if(strcmp(s,str)){
    printf("Error: unknown shape '%s' \n",str);
  } else if(code!=4){
    printf("Error: invalid input format\n");
  } else  {
    double p = 2 * M_PI * c.r;
    double s = c.r * c.r * M_PI;
    printf("circle(%d %d, %.4f) \n",c.p.x,c.p.y,c.r);
    printf("perimeter = %.4f\n",p);
    printf("area = %.4f\n",s);
  }
  return c;
}

 Triangle createTriangle(){
  Triangle t = {};
  char str[20];
  char s[90] ="triangle";
  int code = scanf("%8s((%d %d, %d %d, %d %d, %d %d))",str,&t.p1.x,&t.p1.y,&t.p2.x,&t.p2.y,&t.p3.x,&t.p3.y,&t.p4.x,&t.p4.y);
  printf("%d triangle((%d %d, %d %d, %d %d, %d %d))\n",code,t.p1.x,t.p1.y,t.p2.x,t.p2.y,t.p3.x,t.p3.y,t.p4.x,t.p4.y);
  if(strcmp(s,str)){
    printf("Error: unknown shape '%s' ",str);
  } else if(code!=9){
    printf("Error: invalid input format");
  }
  return t;
}

int main(void) {
  Circle circle = createCircle();
  //Triangle triangle = createTriangle();

  return 0;
}