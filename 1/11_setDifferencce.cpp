#include <iostream>
using namespace std ;
int main(){
    int a1[5]={1,2,3,4,5};
    int n1 = 5 ;
    int b1[7]={3,4,5,6,7,8,9};
    int n2 =7 ;
    int c[5] ;
    int k = 0;
    int a1Index = 0 ;
    
    for (int i = 0; i < n1 ; i++) {
        bool isRepeated = false ;
        for(int j = 0 ; j<n2 ; j++){
           if(a1[i] == b1[j]){
            isRepeated = true ;
            break ;
           }
        }
        if(isRepeated){
            a1Index++ ;
        }
        else{
            c[k] = a1[a1Index] ;
            k++ ;
            a1Index++ ;
        }
    }
    for (int  i = 0; i < k; i++)
    {
        cout<< c[i] <<" ";
    }
    
    return 0 ;
}