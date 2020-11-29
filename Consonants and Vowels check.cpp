// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void checkString(string s);


 // } Driver Code Ends


//User function Template for C++

void checkString(string s)
{
    int v=0;
    int c=0;
    int x = s.size();
    for(int i=0;i<x;i++){
        switch(s[i]){
            case ' ': 
                break;
            case 'a': 
                v++;
                break;
            case 'e': 
                v++;
                break;
            case 'i': 
                v++;
                break;
            case 'o': 
                v++;
                break;
            case 'u': 
                v++;
                break;
            default: 
                c++;    
        }
    }
    if(v>c)
    cout<<"Yes";
    else if(c>v)
    cout<<"No";
    else
    cout<<"Same";
    
    cout<<endl;
}

// { Driver Code Starts.



int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    checkString(s);
	   
	}
	return 0;
}

  // } Driver Code Ends