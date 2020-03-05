#include <stdio.h>
#include <string.h>

typedef struct Circle {
  int x1;
  int y1;
  float r;
} Circle;

typedef struct Triangle {
  int x1;
  int y1;
  int x2;
  int y2;
  int x3;
  int y3;
  int x4;
  int y4;
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
  char str[7];
  char s[7] ="circle";
  int code = scanf("%6s(%d %d, %f)",str,&c.x1,&c.y1,&c.r);
  printf("%d circle(%d %d, %f) \n",code,c.x1,c.y1,c.r);
  if(strcmp(s,str)){
    printf("Error: unknown shape '%s' ",str);
  } else if(code!=4){
    printf("Error: invalid input format");
  }
  return c;
}

 Triangle createTriangle(){
  Triangle t = {};
  char str[9];
  char s[9] ="triangle";
  int code = scanf("%8s((%d %d, %d %d, %d %d, %d %d))",str,&t.x1,&t.y1,&t.x2,&t.y2,&t.x3,&t.y3,&t.x4,&t.y4);
  printf("%d triangle((%d %d, %d %d, %d %d, %d %d))\n",code,t.x1,t.y1,t.x2,t.y2,t.x3,t.y3,t.x4,t.y4);
  if(strcmp(s,str)){
    printf("Error: unknown shape '%s' ",str);
  } else if(code!=9){
    printf("Error: invalid input format");
  }
  return t;
}

int main(void) {
  Circle circle = createCircle();
  Triangle triangle = createTriangle();

  return 0;
}