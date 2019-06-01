#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,height,num,x,dose;
    std::vector<int> arr;
    cout<< "Enter the number of hurdles";
    cin>> n;
    cout << "Enter the height of Dan's ";
    cin >> height;
    cout << "Enter height of the hurdles" << endl;
    for(int i=0;i<n;i++) {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " " << endl;
    x = arr.back();
    if(height < x) {
        dose = x-height;
        cout << dose;
    }
}
