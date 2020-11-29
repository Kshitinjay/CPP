#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
    	bool flag =1;
        long s1;
        cin>>s1;
        long long arr1[s1];
        long long arr2[s1];
        for(int i=0;i<s1;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<s1;i++){
            cin>>arr2[i];
        }
        sort(arr1, arr1 + s1); 
        sort(arr2, arr2 + s1);
        for(int i=0;i<s1;i++){
            if(arr1[i]!=arr2[i]){
            	flag=0;
            }
        }
        if(flag){
        	cout<<"1"<<endl;
        }
        else {
        	cout<<"0"<<endl;
        }
    }
	return 0;
}