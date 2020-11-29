#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,sum1=0,sum2=0,arr[100][100];
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr[i][j] <<" ";
        }
        cout<< endl;
    }
    for(int i=0;i<n;i++) {
        sum1= sum1+arr[i][i];
        sum2= sum2+arr[i][n-1-i];
    }
    cout << abs(sum1-sum2);
    return 0;
}




//00 01 02
//10 11 12
//20 21 22
