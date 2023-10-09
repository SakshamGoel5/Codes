//Program for finding GCD of two numbers using Recursion
#include<iostream>
using namespace std;
int GCD(int a , int b){
    if(a==0){
        return b ;
    }
    else if(b==0){
        return a ;
    }
    else if( a>b){
        return GCD(a%b , b) ;
    }
    else{
        return GCD(a, b%a) ;
    }
}
int main(){
    int a = 4 ;
    int b = 42 ;
    cout << GCD(a,b) ;
    return 0 ; 
}