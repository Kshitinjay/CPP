/* this prog find the minimum and maximum sum of the array
first input an array of limit 5
sort it using sort function
leaving lowest value sum of all will be maximum and
leaving maximum value we get minimum sum happy Coding*/

#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    long arr[5];
    long min =0;
    long max =0;
    for(int i=0;i<5;i++) {
        cin >> arr[i];
    }
    // sorting
    sort(arr,arr+5);
    //sorting complete
    for(int i=0;i<4;i++) {
        min= min+arr[i];
    }
    for(int i=1;i<5;i++) {
        max= max+arr[i];
    }
    cout << min << " " << max;
}
