#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,5,9,6,9,3,8,9,2,7,1};
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            cout<<"Repeated element is:"<<arr[i];
            break;
        }
    }
}