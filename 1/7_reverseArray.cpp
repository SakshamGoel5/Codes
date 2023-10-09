#include <iostream>
using namespace std ;
void print(int arr[] , int size){
    for(int i= 0 ; i< size ; i++){
        cout << arr[i] <<" " ;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8} ;
    int size = 8 ;
    int i = 0 ;
    int j = size -1 ;
    while(i<j){
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;
        i++ ; 
        j-- ;
    }
    for (int i = 0 ; i< size ; i++) {
        cout << arr[i] << " " ;
    }
    return 0 ;
}