#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 4, 5, 6, 7};

    // Case 1:  Manual way using iterator in for loop
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        // *i accesses the value at the current iterator position
        cout << *(i) << " ";
    }

    // Case 2:
    // Automatically (auto) figure out the type of i from vector v
    // No need to dereference since i is a copy of each element
    for (auto i : v)
    {
        cout << i << " ";
    }

    // Case 3: faster than 2 cause it does not create copies
    // Uses reference to avoid copying each element
    // '&' ensures i refers directly to elements in v
    for (const auto &i : v)
    {
        cout << i << " ";
    }

    return 0;
}