#include <iostream>
using namespace std;
int power(int A , int n){
    if(n==0){
        return 1;
    }
    return A* power(A , n-1) ;
}
int main(){
    int A;
    cin>>A ;
    int n ;
    cin>> n ;
    cout << power(A,n) ;
    return 0 ;
}