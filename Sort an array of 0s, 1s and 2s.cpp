#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        sort(arr,arr+s);
        for(int i=0;i<s;i++){
            cout<<arr[i] <<" ";
        }
        cout<<endl;
    }
}