#include<iostream>
#include<utility>
using namespace std;

int main(){
    // A single pair
    pair <int,int> first_pair = {6,9};
    cout<<first_pair.first<<" "<<first_pair.second<<'\n';
    
    
    
    // A single, nested pair
    pair <int, pair <int,int>> nested_pair = {2,{6,9}};
    cout<<nested_pair.first<<" "<<nested_pair.second.first<<" "<<nested_pair.second.second<<'\n';
    
    
    // An array of multiple pairs
                            // 0      1      2
    pair <int, int> arr[] = { {1,2}, {6,5}, {6,9}};
                             //0,1    0,1     0,1
    cout<<arr[1].first<<" "<<arr[2].second<<'\n';
    
    
    
    
    // An array of nested pair
    pair <int,pair<int,int>> arr_pair[] = { {1,{1,2}}, {5,{6,5}}, {8,{6,9}}};

    // pair of 2 pairs
    pair <pair<int,int> , pair<int,int> > pair_pair = {{1, 2}, {3, 4}};


    return 0;
}