#include <stdio.h>
#include <math.h>


int main(void)
{
    double a, b, c;
    
    printf("Insert a:\n");
    scanf("%lf", &a);
    printf("Insert b:\n");
    scanf("%lf", &b);
    
    c = (pow((a-b),4)-(pow(a,4)-4*pow(a,3)*b+6*a*a*b*b))/(pow(b,4)-4*a*pow(b,3));
    
    printf("Result:%lf\n",c);
}