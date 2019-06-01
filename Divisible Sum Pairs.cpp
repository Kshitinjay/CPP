#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,val,count=0,k;
    std::vector<int> arr;
    cout << "Enter the length of the array" ;
    cin >> n;
    cout << "Enter the divisible by number" ;
    cin >> k;
    cout << "enter the elements of the array" ;
    for(int i=0;i<n;i++) {
        cin >> val;
        arr.push_back(val);
    }
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr.size();j++) {
            if(i<j) {
                if((arr[i]+arr[j])%k == 0) {
                count++;
                }
            }
        }
    }
    cout << count;
}
