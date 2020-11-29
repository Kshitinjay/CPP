#include <bits/stdc++.h>
using namespace std;

int main() {
    int size,num,count = 0;
    std::vector<int> arr;
    cin>>size;
    for(int i=0;i<size;i++) {
        cin>>num;
        arr.push_back(num);
    }
    for(int i=1;i<arr.size();count++) {
        if(arr[i+1]!=1 && i<size-1) {
            i=i+2;
        }
        else {
            i = i+1;
        }
    }
    std::cout << count << std::endl;
}
