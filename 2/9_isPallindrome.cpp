//To check if the given string is a palindrome using Recursion
#include<iostream>
#include <string.h>
using namespace std;
bool ispalin(char ar[] , int i , int j){
    if(i==j){
        return true;
    }
    else if(ar[i]!=ar[j]){
        return false ;
    }
    else if(i<j){
        ispalin(ar , i+1 , j-1) ;
    }
   
    return true ;
    


}
int main(){
    char ar[] = {"naman"} ;
    int i = 0 ;
    int j = strlen(ar) -1 ;
    bool is = ispalin(ar , i , j) ;
    if(is){
        cout << "palindrome" ;
    }
    else{
        cout << "not palindrome" ;
    }
    return 0 ; 
}