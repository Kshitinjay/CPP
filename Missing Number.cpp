#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    	bool flag=0;
        int s;
        cin>>s;
        int arr[s];
        for(int i=0;i<s-1;i++){
            cin>>arr[i];
        }
        sort(arr,arr+s);
        for(int i=0;i<s-1;i++){
            if(arr[i]!=i+1){
                std::cout << i+1 << std::endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
        	cout<<s;
        }
    }
}