#include <stdio.h>

float df(float x, float y){
    return x*x*x+y;
}

int main(){
    float x0, y0, h, x;
    puts("Enter the values of x0, y0, h, x ");
    scanf("%f %f %f %f", &x0, &y0, &h, &x);
    while(1){
        if (x0>x) return 0;
        y0+=h*df(x0, y0);
        x0+=h;
        printf("When x = %3.3f y = %4.5f\n", x0, y0);
    }
}
