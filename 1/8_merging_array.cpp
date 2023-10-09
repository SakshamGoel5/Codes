// merging two sorted array 
#include <iostream > 
using namespace std ;
int main(){
    int arr[] = {1,3,5,9} ;
    int n1 = sizeof(arr) / sizeof(int) ;
    int brr[] = {2,3,6,8,10} ;
    int n2 = sizeof(brr) / sizeof(int) ;
    int ans[10] ;


    int i = 0;
    int j =  0;
    int k = 0;
    while(i<n1 && j<n2){
        if(arr[i] < brr[j]){
            ans[k] = arr[i] ;
            k++ ;
            i++ ;
        }
        else{
            ans[k] = brr[j];
            k++ ;
            j++ ;
        }
    }
    while(i<n1){
        ans[k] = arr[i] ;
            k++ ;
            i++ ;
    }
    while(j<n2){
        ans[k] = brr[j];
            k++ ;
            j++ ;
    }


    
    for (int i = 0; i < k ; i++)
    {
        cout<< ans[i] <<" " ;
    }
    
    return 0 ;
}