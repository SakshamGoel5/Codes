#include <iostream>
using namespace std ;
void insert(int m , int n , int matrix1[5][5] ){
    for (int i = 0; i < m; i++) {
            for(int j = 0 ; j<n ; j++){
                cin >> matrix1[i][j] ;
            }
        }
}
void transpose(int matrix[5][5] ,int m ,int n ){
    for (int i = 0; i < m; i++){
        for(int j  = i; j < n   ; j++){
            swap(matrix[i][j] , matrix[j][i]) ;
        }
    }
    
}
int main(){
    int m , n , p , q;
    int matrix[5][5] ;
    
    
    cout << " enter m and n \n" ;
    cin>> m >> n ;
    
        cout<< "enter matrix " << endl ;
        insert( m , n , matrix) ;
        
        cout << "transpose" << endl ;
        transpose(matrix , m  ,n) ;
        for (int i = 0; i < n; i++) {
            for(int j = 0 ; j< m; j++){
                cout << matrix[i][j] <<" ";
            }
            cout << endl ;
        }
        

    return 0 ;
}