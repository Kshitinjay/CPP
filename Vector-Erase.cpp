#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,num,x,a,b;
    vector<int> arr;
    cin>>n;
    for(int i =0;i<n;i++) {
        cin>>num;
        arr.push_back(num);
    }
    cin>>x;
    cin>>a >>b;
    arr.erase(arr.begin()+(x-1));
    arr.erase(arr.begin()+(a-1),arr.begin()+(b-1));
    cout<<arr.size()<< endl;
    for(int i =0;i<arr.size();i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}
