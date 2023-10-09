#include<iostream>
using namespace std ;
struct student{
    int sub1 ;
    int sub2 ;
    int sub3 ;
} ;
int main(){
    struct student s[10] ;
    int average ;
    for(int i =0 ; i< 5 ; i++){
        scanf("%d%d%d" , &s[i].sub1  , &s[i].sub2 , &s[i].sub3) ;
    } 
    cout << "------------" << endl ;
    for(int i =0 ; i< 5; i++){
        average =(s[i].sub1 + s[i].sub2 +s[i].sub3)/3 ;
        cout<< "average of " << i << " student " << average;
        cout << endl;
    }
    return 0;
}