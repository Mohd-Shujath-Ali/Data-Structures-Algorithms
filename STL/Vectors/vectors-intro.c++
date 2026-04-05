#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector declaration aka dynamic array
    vector<int> v;

    // push_back -> adds already created value (may copy)
    v.push_back(4);

    // emplace_back -> it constructs value in-place adding element but increaseing the size itslef (no extra copy)
    v.emplace_back(5);

    // vector(size, value) -> creates vector with fixed size n & n no of default value
    vector<int> v1(5, 100);

    // copy constructor -> copies another vector
    vector<int> v2(v1);

    // another vector
    vector<int> ok;
    ok.push_back(6);    // insert existing value
    ok.emplace_back(7); // construct in-place
    ok.emplace_back(8);
    ok.emplace_back(9);

    // begin() -> iterator points the address or returns the address of the first element of the vector

    cout << "First element: " << *(ok.begin()) << endl;

    vector<int>::iterator it1 = ok.begin(); // points to first element

    // end() -> it points AFTER last element like in linked list tail->next->next (not valid to dereference)
    vector<int>::iterator it2 = ok.end();

    // rbegin() ->  reverse iterator (starts from last element) if rit1++ then it goes reverse like from 5 the element when rit1++ it will move reverse to 4 -> 2 -> 1 positions
    vector<int>::reverse_iterator rit1 = ok.rbegin();

    // rend() -> reverse end (before first element) opposite of end() but from left to right
    vector<int>::reverse_iterator rit2 = ok.rend();

    // it++ ->> move iterator to next element
    it1++;

    // Basically .at(index) give the element at index
    cout << "Element at " << v[0] << " " << v.at(0) << '\n';

    // .back() returns the element at the last index

    cout << "Element at last is: " << v.back() << "\nfor ok vector the last element is =  " << ok.back();

    return 0;
}