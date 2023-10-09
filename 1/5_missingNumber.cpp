#include <iostream> 
using namespace std ;
int main(){
    int arr[] = {0,1,2,3,5,6,7} ;
    int size = sizeof(arr) / sizeof(int) ;
    int sum = (size * (size+1)) /2 ;
    int arrSum = 0 ;
    for (int i = 0; i < size; i++)
    {
        arrSum = arrSum + arr[i] ;
    }
    int ans = sum - arrSum ;
    cout << ans ;
    return 0 ;
}