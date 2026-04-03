
/*
For n = 4

4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 

n - ( the minimum of adjacent distances )

*/

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i< 2* n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int left = j;
            int top = i;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout<<n-min(min(left,right),min(top,bottom))<<" ";
            
        }
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