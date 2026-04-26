#include <iostream>
#include <set>
using namespace std;

void display(set<int> st)
{
    cout << "Elements of set: ";
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << '\n';
}

int main()
{
    set<int> st;

    // Insert elements
    st.insert(1);      // {1}
    st.emplace(2);     // {1, 2}
    st.insert(2);      // duplicate -> ignored -> {1, 2}
    st.insert(4);      // {1, 2, 4}
    st.insert(3);      // {1, 2, 3, 4}

    display(st);

    // find()
    auto it1 = st.find(3);
    if (it1 != st.end())
        cout << "3 found in set\n";
    else
        cout << "3 not found\n";

    auto it2 = st.find(6);
    if (it2 != st.end())
        cout << "6 found in set\n";
    else
        cout << "6 not found\n";

    // erase()
    st.erase(4);   // removes 4 -> {1, 2, 3}

    display(st);

    // count()
    int cnt = st.count(1); // returns 1 if exists, else 0
    cout << "Count of 1: " << cnt << '\n';

    return 0;
}