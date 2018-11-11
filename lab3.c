#include <stdio.h>
#include <math.h>
int main()

{
double x=0.1;
long double y, sum = 0, sum2 = 0 ;
    for ( double k = 0.7/10; x <= 0.8; x += k ) {
    y=0.25*(log(1+x)-log(1-x))+(0.5*atan(x));
         sum=0;
         sum2=0;
        for (int n = 0; n < 3; n++ ) {
        double f = pow(x,(4*n+1))/(4*n+1);
        sum += f;
        }

        for(int j = 0; j < 3; j++) {
            long double ef = pow(x,4*j+1)/(4*j+1);
            if( ef >= 0.0001 )
            sum2 += ef;
            }
        printf("y = %.5Lf, ", y);
        printf ( "x = %f, ", x);
        printf("Sum = %.10Lf, ", sum);
        printf("Sum until epsilon = %Lf\n", sum2);
    }


}
