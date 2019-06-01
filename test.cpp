#include <iostream>
#include <vector>
using namespace std;

int main() {
    int age;
    cout << "Enter the total candles";
    cin >> age;
    vector <int> arr;
    for(int i=0;i<age;i++) {
        cin>>arr;
    }
    for(int i=0;i<arr.size;i++) {
        cout << arr;
    }

}
