#include<stdio.h>
#include<math.h>

float f(float x){
    return (x*x*x*x - x - 10);
}

float df(float x){
    return (4*x*x*x -1);
}
//just writing log in c give the value of natural log

int main(){
    int itr,maxitr;
    float x0,x1,aerr;

    printf("Enter x0, allowed error,maximum iterations\n");
    scanf("%f %f %d",&x0,&aerr,&maxitr);
    for(itr=1;itr<=maxitr;itr++){
        x1=x0-(f(x0)/df(x0));
        printf("Interaction no. %3d, x = %9.6f\n",itr,x1);
        if(fabs(x0-x1)<aerr){
            printf("After %3d iterations, root = %8.6f\n",itr,x1);
            return 0;
        }
        x0=x1;
    }
    printf("Iterations not sufficient, solution does not converge\n");
return 1;
}
