#include <iostream>
using namespace std ;
int main(){
    int arr[] = {1,2,7,3,3,5,6,6,9} ;
    int size = sizeof(arr) / sizeof(int) ;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j< size; j++)
        {
            if(arr[i] == arr[j]){
                cout<< "repeated element is "<< arr[i] <<endl ;
            }
        }
        
    }
    
    return 0 ;
}