// insert when position and element is given
#include <stdio.h>
int main(){
    int arr[] = {1,2,3,6,7,8};
    int size = 6 ;
    int pos ;
    int ele ;
    scanf("%d%d" , &ele , &pos) ;
    for(int i = size -1  ; i >= pos-1 ; i--){
        arr[i+1] = arr[i] ;
    }
    arr[pos-1] = ele ;
    for(int i=0 ; i<size ; i++){
        printf("%d " , arr[i]) ;
    }
    return 0 ;
}