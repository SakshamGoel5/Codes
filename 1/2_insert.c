#include <stdio.h>
int main(){
    int arr[] = {1,2,3,5,6,7} ;
    int ele ;
    int size = sizeof(arr) / sizeof(int) ;
    printf("enter number to insert in ascending order \n") ;
    scanf("%d" , &ele) ;
     int temp ;
     int pos = 0;
   while (arr[pos]<=ele )
   {
     pos= pos+1 ;
   }
   for(int i = size-1 ; i> pos-1 ; i--){
    arr[i+1] = arr[i] ;
   }
   arr[pos] = ele ;
   printf("%d" , pos) ;
    size = sizeof(arr) / sizeof(int) ;
  
    printf("after inserting array becomes \n") ;
    for (int i = 0; i < size; i++)
    {
        printf("%d" , arr[i]) ;
    }
     
    return 0 ;
}