#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int arr[5][12];
    int total=0;
    for(int emp=0;emp<5;emp++) {
        cout << "Enter sales of sales man:" << emp+1 << endl;
        for(int mon=0;mon<12;mon++) {
            cout << "Month-" << mon+1 << ":" ;
            cin >> arr[emp][mon];
            total = total + arr[emp][mon];
        }
    cout << "total sales of emp" << emp+1 << ":" << total;
    cout << endl;
    }
}
