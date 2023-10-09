#include<iostream>
using namespace std ;
struct student{
    char name[10] ;
    int rollNO ;
} ;
int main(){
    struct student s[10] ;
    for(int i =0 ; i< 10 ; i++){
        scanf("%d%s" , &s[i].rollNO  , s[i].name) ;
    } 
    cout << "------------" << endl ;
    for(int i =0 ; i< 10; i++){
        if(s[i].rollNO <5){
        printf("%d  %s" , s[i].rollNO  , s[i].name) ;
        }
        cout<<endl;
    } 
    return 0;
}