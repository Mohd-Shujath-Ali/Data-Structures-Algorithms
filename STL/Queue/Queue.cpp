#include <iostream>
#include <queue>
using namespace std;

void display(queue<int> qu, int n)
{

    cout << "This is inside display with n size as parameter: ";
    for (int i = 0; i < n; i++)
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    cout<<'\n';
}


void display(queue<int> qu){
    
    cout << "This is inside display with only qu passed: ";

    while(!qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }

}


int main()
{
    cout << "Enter the size of Queue: ";
    int n;
    cin >> n;

    queue<int> qu;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        qu.emplace(element);
    }

    display(qu, n);
    display(qu);

    return 0;
}