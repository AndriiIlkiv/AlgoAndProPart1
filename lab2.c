#include <stdio.h>
#include <cs50.h>
#include <math.h>

int Factorial(int n)
{
    int i,q;
    q=1;
    for(i=1;i<n+1;i++)
    {
    q=i*q;
    }
    return q;
}

int main(void)
{

    double s=0.0;
    int n=0 , x = 0, l = 1;
    while ((pow(10,x)/Factorial(n))>0.0001)
    {

    s+=pow(10,x)/Factorial(n);
    printf("%lf\n",s);
    x++;
    n++;
    if (l<10)
    {
    l++;
    GetChar();
    }
    else l=1;
    }

}
