#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag = 0;
        string s;
        cin>>s;
        int n = s.size();
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n-1;i++){
            arr1[i]= abs((int)s[i]-(int)s[i+1]);
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            arr2[i]= abs((int)s[i]-(int)s[i+1]);
        }
        for(int i=0;i<n;i++){
            if(arr1[i]==arr2[i]){
                flag = 0;
            }
            else {
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<"Not Funny"<<endl;
        }
        else {
            cout<<"Funny"<<endl;
        }
    }
    return 0;
}