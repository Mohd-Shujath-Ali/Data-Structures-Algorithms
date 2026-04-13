#include <iostream>
#include <stack>

using namespace std;

int main()
{

    // To make a list of 1 2 3 4 elements we can use
    // First in last out -> so 4 comes in last and 1 at first
    stack<int> st;
    st.emplace(4);
    st.push(3);
    st.push(2);
    st.push(1);


    // Stack traversal is not directly possible because it does not support iteration or indexing

    // int size = st.size();
    // for(int i=0;i<size;i++){
    //     cout<<st[i]<<" ";
    // }

    // cout<<'\n';
    
    // This keeps the original stack intact, by using a temp copy;
    stack<int> temp;
    temp.swap(st);
    
    while(!temp.empty()) {
        cout << temp.top()<<" ";
        temp.pop();
    }
    cout<<'\n';


    cout<<st.top()<<'\n';
    cout<<st.size()<<'\n';


    return 0;
}