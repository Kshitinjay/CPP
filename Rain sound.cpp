#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,l,r,s,mul=1;
    std::vector<int> arr;
    cin>>t;
    for(int i=0;i<t;i++){
        cin >> l >> r >>s;
        for(int j=1;j<=r;j++){
            mul=j*s;
            if(mul<l){
            }
            else if(mul>r){
                break;
            }
            else {
                arr.push_back(j);
            }
        }
    cout << *min_element(arr.begin(),arr.end()) << " " << *max_element(arr.begin(), arr.end());
    arr.clear();
    }
}
