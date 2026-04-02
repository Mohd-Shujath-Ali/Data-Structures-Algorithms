/*
for n = 5

E 
D E 
C D E 
B C D E 
A B C D E 

*/


#include<iostream>
using namespace std;


void pattern(int n){

    char initial = 'A' + (n-1);

    for(char ch = initial ;ch>='A'; ch--){

        for(char cho = ch; cho <= initial ;cho++){
            cout<<cho<<" ";
        }
        cout<<"\n";

    }
}



int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    pattern(n);
    return 0;

}