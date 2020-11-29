#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,nums;
    std::vector<int> arr;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> nums;
        arr.push_back(nums);
    }
    for(int i=0;i<t;i++) {
        int c=1;
        for(int j=1;j<=arr[i];j++){
            if(j%2==0){
                c=c+1;
            }
            else {
                c=c*2;
            }
        }
    cout << c << endl;
    }
}
