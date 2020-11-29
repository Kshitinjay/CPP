#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag=1;
        string s;
        cin>>s;
        int len = s.length();
        for(int i = len-1;i>=0;i--){
            if(s[i]=='1'){
                flag=0;
                cout<<i<<endl;
                break;
            }
            else {
                flag=1;
            }
        }
        if(flag){
            cout<<"-1"<<endl;
        }
    }
}