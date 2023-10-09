#include<iostream>
using namespace std ;
struct student{
    char name[10] ;
    int salary ;
} ;
int main(){
    struct student s[10] ;
    for(int i =0 ; i< 5 ; i++){
        scanf("%d%s" , &s[i].salary  , s[i].name) ;
    } 
    cout << "------------" << endl ;
    for(int i =0 ; i< 5; i++){
        if(s[i].salary > 1000){
        printf("%d  %s" , s[i].salary  , s[i].name) ;
        cout<<endl;
        }
    } 
    return 0;
}