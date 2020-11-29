#include <bits/stdc++.h>
using namespace std;

int main() {
    int size,num;
    std::vector<int> arr;
    cin>>size;
    for(int i=0;i<size;i++) {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    while(!arr.empty()){
        std::cout << arr.size() << std::endl;
        for(int i=0;i<arr.size();i++){
            arr[i] = arr[i] - arr[arr.size()-1];
        }
        while(arr.back() == 0 && !arr.empty()){
            arr.pop_back();
        }
    }
}
