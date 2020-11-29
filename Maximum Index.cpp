#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t,i,j,n,m=-1,ans=-1;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	     cin>>a[i];
	    if(n==1){
	        cout<<"0"<<endl;
	    }
	    else{
	    j= n-1;
	    ans=-1;m=-1;
	    for(i=0;i<n-1;i++){
	        j= n-1;
	        while(j!=i){
	            if(a[i] <= a[j]){
	                m=j-i;
	                break;
	            }
	            j--;
	        }
	        ans=max(ans,m);
	    }
	    cout<<ans<<"\n";
	   }
	}
	return 0;
}