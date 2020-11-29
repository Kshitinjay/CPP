#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    long int num,number;
	    int c=0;
	    vector<int> arr;
	    cin>>num;
	    while(num>0){
		    number = num % 10;
		    arr.push_back(number);
		    num = num /10;
	    }
        int n=arr.size();
	    for (int i=0;i<n;i++) {
	        if(arr[i]==0){
	            continue;
	        }
	        else if(num%arr[i]==0){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	    }
	return 0;
}