#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr;
    int n,input;
    //int low;
    int count1=0,count2=0;
    cout << "Enter the limit" ;
    cin>> n;
    if(n>=1 and n<=1000) {
        for(int i=0;i<n;i++) {
            cout << "Enter the score" ;
            cin>>input;
            arr.push_back(input);
    }
    int high_score =arr[0];
    for(int i=0;i<n;i++) {
        if(high_score<arr[i]) {
            high_score = arr[i];
            count1++;
        }
        else if(high_score>arr[i]) {
            high_score = high_score;
        }
    }
    int low =arr[0];
    for(int i=0;i<n;i++) {
        if(low>arr[i]) {
            low = arr[i];
            count2++;
        }
        else {
            low = low;
        }
    }
    cout << count1 << " " << count2;
    }
}
