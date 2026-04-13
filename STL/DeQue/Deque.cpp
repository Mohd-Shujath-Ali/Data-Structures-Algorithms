#include <iostream>
#include <deque>

using namespace std;

int main()
{

    // To make a deque of 1 2 3 4 elements we can use
    
    deque<int> dq;
    dq.push_back(4);
    dq.emplace_back(5);
    dq.push_front(3);
    dq.push_front(2);
    dq.emplace_front(1);

    for(auto &i:dq){
        cout<<i<<" ";
    }
    cout<<'\n';
    dq.pop_back();
    dq.pop_front();


    
    for(auto &i:dq){
        cout<<i<<" ";
    }
    cout<<'\n';
    
    dq.back();
    dq.front();

    // rest functions are same as vector( begin, end, rbegin, rend, clear, insert, size, swap);

    return 0;
}