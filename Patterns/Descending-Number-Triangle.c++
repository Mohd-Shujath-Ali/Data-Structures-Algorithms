/*
If n = 5, your code prints:

5 4 3 2 1 0
4 3 2 1 0
3 2 1 0
2 1 0
1 0
0

*/


#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=n;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    pattern(n);
}
