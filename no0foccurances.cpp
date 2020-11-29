#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int s,num,c=0,x;
        cin>>s>>x;
        vector<int> arr;
        for(int i=0;i<s;i++) {
            cin>>num;
            arr.push_back(num);
        }
        for(int i=0;i<s;i++){
            if(arr[i]==x){
                c++;
            }
        }
        if(c==0){
            c=-1;
        }
        cout<<c<<endl;
    }
}