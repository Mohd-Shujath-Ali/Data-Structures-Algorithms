#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

int main()
{
    vector<int> v = {1, 3, 4, 5, 6, 7};

    // v.erase(source index, destination index +1 );
    // if i want to delete 3, 4, 5 then i must pass the indexes 1, 4 in erase function
    v.erase(v.begin() + 1, v.begin() + 4);
    print_vector(v);

    // insert function

    // v.insert(postion, element)

    v.insert(v.begin() + 1, 3);
    print_vector(v);

    // Now if i want to insert an element no of times after certain index..
    // v.insert(start position, no of times, element)
    v.insert(v.begin() + 2, 4, 5);
    print_vector(v);

    return 0;
}