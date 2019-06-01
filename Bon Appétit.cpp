#include <iostream>
#include <vector>
using namespace std;
int main() {
    int dish,rate,del,sum=0,charged;
    std::vector<int> arr;
    cout << "Enter the number of dish and what you want to delete" << endl;
    cin>>dish >>del;
    for(int i=0;i<dish;i++) {
        cout << "Enter the cost of the dish" << endl;
        cin>> rate;
        arr.push_back(rate);
    }
    cout << "Enter the total divided amount " << endl;
    cin>> charged;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i]==arr[del]) {
            continue;
        }
        else {
            sum = sum + arr[i];
        }
    }
    sum = sum/2;
    if(sum == charged) {
        cout << "Bon Appetit";
    }
    else {
        cout << charged-sum;
    }
}
