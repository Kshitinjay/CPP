#include <iostream>
using namespace std;

int main() {
    float marks[5];
    for(int i =0;i<5;i++) {
        cout << "Enter the marks of student" << i+1 << ":";
        cin >> marks[i];
        cout << endl;
    }
    cout << "see how array holds the value in index" << endl;
    for(int i=0;i<5;i++) {
        cout << "marks [" << i <<"]" << " " << marks[i] << endl;
    }
}
