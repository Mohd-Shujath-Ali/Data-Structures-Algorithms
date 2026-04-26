#include <iostream>
#include <queue>
using namespace std;

// Function with size parameter
void display(priority_queue<int, vector<int>, greater<int>> pq, int n)
{
    cout << "This is inside display with n size as parameter: ";
    for (int i = 0; i < n; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << '\n';
}

// Function without size parameter
void display(priority_queue<int, vector<int>, greater<int>> pq)
{
    cout << "This is inside display with only pq passed: ";

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop(); // pop happens in O(n)
    }
    cout << '\n';
}

int main()
{
    cout << "Enter the size of Priority Queue: ";
    int n;
    cin >> n;

    // Min-heap declaration
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        pq.push(element); // It happends in log(n)
    }

    display(pq, n);
    display(pq);

    return 0;
}