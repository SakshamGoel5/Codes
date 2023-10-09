#include <iostream> 
using namespace std;
int main (){
    int a1[5]={1,2,3,4,5};
    int n1 = 5 ;
    int b1[7]={3,4,5,6,7,8,9};
    int n2 =7 ;
    int c[40];
    int flag=-1;
    int k = 0 ;
    for(int i=0;i<n1;i++){
        c[k]= a1[i];
        k++ ;
        }
      for(int i=0;i<n2 ;i++){   
        c[k]= b1[i];
        k++ ;
    }

for(int i=0; i<(n1+n2); i++){
        cout<<c[i]<<" ";
}
    cout << endl ;
    // sort 
    for(int i=0; i<(n1+n2); i++)
    {
        for(int j=i+1; j<(n1+n2); j++) { 
            if(c[i]>c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    
   
    // marking duplicates as -1 (flag)
    for (int i=0;i<(n1+n2);i++){
        if (c[i]==c[i+1]){
        c[i]=flag;
        }
    }
    for(int i=0; i<(n1+n2); i++){
        cout<<c[i]<<" ";
    }
    cout << endl ;
    for(int i=0; i<(n1+n2); i++){
        if(c[i]>0){
        cout<<c[i]<<" ";
        }
    }

    
    return 0;
}