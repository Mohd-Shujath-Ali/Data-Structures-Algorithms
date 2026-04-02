/*

For n = 5

**********
****  ****
***    ***
**      **
*        *

*        *
**      **
***    ***
****  ****
**********

*/


#include<iostream>
using namespace std;

void pattern(int n){

    int spaces =0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j =0;j<spaces;j++ ){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        spaces+=2; 
        cout<<'\n';
    }
    for(int i=0;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j =0;j<spaces;j++ ){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        spaces-=2; 
        cout<<'\n';
        

    }
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    pattern(n);
    return 0;
}