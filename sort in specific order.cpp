#include <bits/stdc++.h>
using namespace std;
void sorted_array(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i] & 1){
            arr[i] *= -1;
        }
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i] & 1){
            arr[i] *= -1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        sorted_array(arr,s);
        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }
    }
}