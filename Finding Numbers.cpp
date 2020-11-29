#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    	int s,k;
    	bool flag = true;
    	cin>>s;
    	int arr[s];
    	for(int i=0;i<s;i++){
    	    cin>>arr[i];
    	}
    	cin>>k;
    	for(int i=0;i<s;i++){
    	    if(arr[i]==k){
    	        cout<<i<<endl;
    	        flag = false;
    	    }
    	}
    	if(flag){
    	    cout<<"-1"<<endl;
    	}
    }
}