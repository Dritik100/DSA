#include<iostream>
using  namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        //space
        for(int j=1 ;j<=2*(n-i);j++){
            cout<<" ";
        }
        //number
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1; j<= 2*i-3;j++){
            cout<<" ";
        }

        //number
        if(i!=1){
            for(int j=1;j<=i;j++){
                cout<<i-j+1;
            }
              
        }
         cout<<endl; 
       
    }
    for(int i=n-1;i>=1;i--){
        //space
        for(int j=1 ;j<=2*(n-i);j++){
            cout<<" ";
        }
        //number
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1; j<= 2*i-3;j++){
            cout<<" ";
        }

        //number
        if(i!=1){
            for(int j=1;j<=i;j++){
                cout<<i-j+1;
            }
              
        }
         cout<<endl; 
       
    }
    return 0;
}