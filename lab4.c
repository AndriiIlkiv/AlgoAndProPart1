#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main()
{
printf("Please, give me length: ");
int k = GetInt();
int x[100],temp;
for ( int i = 0; i < k; i++) {
x[i] =  rand() % 100 - 40;
printf("%d ", x[i]);

}
printf("\n");
printf("Give me number which you want to delete: ");
int b = GetInt();
for ( int i = 0; i < k-1; i++) {
if ( x[i] == b ) {
    for ( int j = i; j < k-1; ++j);
    x[i]=x[i+1];
    }
    if (x[i]==x[i+1]) {
    for (int i = 0; i<k-1; i++) {
    x[i+1]=x[i+2]; }
    }
printf("%d ", x[i]);
}
printf("\n");
printf("How many times you want to move array: ");
int a = GetInt();
      for (int i = 0; i < a; ++i)
    {
        temp = x[k-2];
        for ( int j = k - 2; j > 0; j--)
            x[j] = x[j-1];
        x[0] = temp;
    }

     for ( int i = 0; i < k-1; ++i)
        printf("%d ", x[i]);
        printf("\n");
}
