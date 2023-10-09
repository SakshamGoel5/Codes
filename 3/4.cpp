#include<iostream>
using namespace std ;
struct student{
    char name[10];
    int sub1 ;
    int sub2 ;
    int sub3 ;
} ;
int main(){
    struct student s[10] ;
    for(int i =0 ; i< 5 ; i++){
        scanf("%s%d%d%d" ,&s[i].name , &s[i].sub1  , &s[i].sub2 , &s[i].sub3) ;
    } 
    cout << "------------" << endl ;
    
    int max1 =0;
    int max2 =0;
    int max3 =0;
    for(int i=0 ; i<5 ; i++){
        if(s[max1].sub1 < s[i].sub1){
            max1= i;
        }
        else if(s[max2].sub2 < s[i].sub2){
            max2= i;
        }
        else if(s[max3].sub3 < s[i].sub3){
            max3= i;
        }
    }
    cout<< "mex marks in subject1 of student -->" << s[max1].name << endl ; 
    cout<< "mex marks in subject2 of student -->" << s[max2].name << endl ; 
    cout<< "mex marks in subject3 of student -->" << s[max3].name << endl ; 
    return 0;
}