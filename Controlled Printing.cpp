// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// Function Prototype
void forkCPP();


 // } Driver Code Ends


//User function Template for C++

// Function to print ForkCPP
// N : input number
void forkCPP(int N){
    
    // Your code here
    if((N%3==0) and (N%5==0)){
        cout<<"Fork CPP";
    }else if(N%5==0){
        cout<<"CPP";
    }else if(N%3==0){
        cout<<"Fork";
    }else if((N%3!=0) && (N%5!=0)){
    }
    cout << endl;
}

// { Driver Code Starts.

// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int N;
        
        cin >> N;
        
        forkCPP(N);
        
    }
    
}  // } Driver Code Ends