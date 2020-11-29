#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		bool flag = 1;
		vector<int> arr; 
		int n,num;
		cin>>n;
    	int i = 0; 
    	while (n > 0) {
        	num = n % 2;
        	arr.push_back(num);
        	n = n / 2; 
        	i++; 
    	}
    	// for (int j = i - 1; j >= 0; j--) 
     //   	cout << arr[j]; 
        // cout<<endl;	
        for (int i=0;i<arr.size()-1;i++) {
        	if(arr[i]==arr[i+1]){
        		cout<<"0";
        		flag=0;
        		break;
        	}
        }
        if(flag){
        	cout<<"1";
        }
	} 
}