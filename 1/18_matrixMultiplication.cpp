#include <iostream>
using namespace std ;
void insert(int m , int n , int matrix1[5][5] ){
    for (int i = 0; i < m; i++) {
            for(int j = 0 ; j<n ; j++){
                cin >> matrix1[i][j] ;
            }
        }
}
void multiply(int matrix1[5][5] ,int matrix2[5][5] ,int result[5][5] ,int m ,int n ,int p ,int q){
    for (int i = 0; i < m; i++){
        for(int j  = 0 ; j<q ; j++){
            result[i][j] = 0 ;
            for(int k = 0 ; k<n ; k++){
                result[i][j] = result[i][j] + matrix1[i][k]* matrix2[k][j] ;
            }
        }
    }
    
}
int main(){
    int m , n , p , q;
    int matrix1[5][5] ;
    int matrix2[5][5] ;
    int result[5][5] ;
    
    cout << " enter m and n \n" ;
    cin>> m >> n ;
    cout << " enter p and q \n" ;
    cin>> p >> q ;

    if(n==p){
        cout<< "enter matrix 1" << endl ;
        insert( m , n , matrix1) ;
        cout<< "enter matrix 2" << endl ;
        insert( p , q , matrix2) ;
        multiply(matrix1 , matrix2 , result , m , n , p , q) ;
        cout << "result" << endl ;
        for (int i = 0; i < m; i++) {
            for(int j = 0 ; j<q ; j++){
                cout << result[i][j] <<" ";
            }
            cout << endl ;
        }
        
    }

    return 0 ;
}