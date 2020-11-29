#include<bits/stdc++.h>
using namespace std;
int check(int arr[],int s, int x){
    int ans_index=-1;
    for(int i=0;i<s;i++){
        if(arr[i]<=x){
            ans_index=i;
        }
    }
    return ans_index;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,x;
        cin>>s>>x;
        int arr[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        cout<<check(arr,s,x)<<endl;
    }
    return 0;
}