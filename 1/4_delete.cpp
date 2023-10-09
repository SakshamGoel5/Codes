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
    int pos ;
    cout<< "enter element position to delete " ;
    cin>> pos ;
    print(arr , size) ;
    cout << endl;
    for(int i = pos ; i< size ; i++  ){
        arr[i] = arr[i+1] ;
    }
    size = size -1 ;
    print(arr , size) ;
    return 0 ;
}