#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    	int s,k;
    	cin>>s;
    	int arr[s];
    	for(int i=0;i<s;i++){
    	    cin>>arr[i];
    	}
    	cin>>k;
    	sort(arr,arr+s);
    	cout<<arr[k-1]<<endl;
    }
}