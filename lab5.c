#include <stdio.h>
#define m 10


void addData(int arr[m][m] , int size){

  printf("Add data to your array\n");
  
  for(int j = 0; j < size ; j++){
  for(int i = 0; i < size ; i++){
  
    printf("Add element (%d,%d) :" , i + 1 , j+1);
    scanf("%d" , &arr[i][j]);
    
        }
    }
}
  
void sumArray( int size , int arr[m][m], int sum ) {

    sum = 0 ;
    int k =0;

  
  for(int j = 0; j < size ; j++){
  k++;
  for(int i = 0; i < k-1 ; i++){
    
    sum+=arr[i][j];
        } }   
    
 
 printf("Sum of numbers is %d", sum);
 printf("\n");
 } 
  
void printArray( int size , int arr[m][m]) {
  
     for(int j = 0; j < size; j++){
     printf("\n");
     for(int i = 0; i < size; i++){
         printf("%d " , arr[i][j]);
     }
     }
     printf("\n");
}


   int main(void) {
   int size, arr[m][m],sum=0;
   printf("Enter size of your matrix: ");
   scanf("%d",&size);
   addData( arr, size );
   printArray( size , arr);
   sumArray( size , arr , sum );
   }
        
