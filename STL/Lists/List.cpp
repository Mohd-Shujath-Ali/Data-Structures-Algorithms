#include <iostream>
#include <list>

using namespace std;

int main()
{

    // To make a list of 1 2 3 4 elements we can use
    
    list<int> ls;
    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.push_front(1);

    for(auto &i:ls){
        cout<<i<<" ";
    }

    return 0;
}