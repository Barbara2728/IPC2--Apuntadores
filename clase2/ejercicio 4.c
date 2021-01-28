#include <stdio.h>

int main() {
    
    int x = 33;
    int y;
    int *p;
    p = &x;
    printf("el valor de p %d \n", *p);
    
    y = *p + 10;
    printf("el valor de y es %d", y);
    return 0;
}
  