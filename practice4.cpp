#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    for(int row=num;row>0;row--) {
        for(int col=0;col<row;col++) {
            cout << "#";
        }
        for(int k=num;k>row;k--) {
            cout << "*";
        }
    cout << endl;
    }

}
