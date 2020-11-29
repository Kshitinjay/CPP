#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int arr[s][s];
        for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<s;i++){
            if(i%2==0){
                for(int j=0;j<s;j++){
                    cout<<arr[i][j]<<" ";
                }
            }
            else {
                for(int k=s-1;k>=0;k--){
                    cout<<arr[i][k]<<" ";
                }
            }
        }
        cout<<endl;
    }
}