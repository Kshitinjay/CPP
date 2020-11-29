#include <bits/stdc++.h>
using namespace std;
int first(int arr[],int s,int x){
    int flag=1;
    for(int i=0;i<s;i++){
        if(arr[i]==x){
            flag=0;
            return i;
            break;
        }
    }
    if(flag){
        return -1;
    }
}
int second(int arr[],int s,int x){
    int flag=1;
    for(int i=s-1;i>=0;i--){
        if(arr[i]==x){
            flag=0;
            return i;
            break;
        }
    }
    if(flag){
        return -1;
    }
}
int main(){
    int t;
    cout<<"test case";
    cin>>t;
    while(t--){
        int s,x;
        cout<<"Enter size of array:"<<endl;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        cout<<"Enter element to search:"<<endl;
        cin>>x;
        cout<<first(arr,s,x)<<" ";
        cout<<second(arr,s,x);
    }
}