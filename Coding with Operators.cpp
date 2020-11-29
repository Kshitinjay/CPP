// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// Function Prototype with arguments a, b and c
void operations(int a, int b, int c);


 // } Driver Code Ends


//User function Template for C++

/* Function to do the operations.
* Arguments : a, b and c
*/
void operations(int a, int b, int c){
    
    // Your code here
    long long int p;
    p=pow(a,b);
    cout<<p<<endl;
    cout<<(p^c)<<endl;
    cout<<(p%c)<<endl;
    
    
}

// { Driver Code Starts.

// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int a, b, c;
        
        cin >> a >> b >> c;
        
        operations(a, b, c);
        
    }
    
}  // } Driver Code Ends