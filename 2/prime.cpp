#include <iostream>
#include <math.h>
using namespace std ;
int main(){
    int i = 0 ;
    int n ;
    cin>> n ;
    int c = 0 ;
    int d = sqrt(n) ;
     for(int i=2 ; i<=d; i++){
        if(n%i == 0){
            c++ ;
        }
     }
     if(c== 0){
        cout<< "prime no" ;
     }
     else{
        cout << "not prime no" ;
     }
    return 0 ;
}