#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    void change(int);
    int orig = 10;
    cout << "The original value is" << orig << endl;
    change(orig);
    cout << "Value after change is over:" << orig << endl;
    return 0;
}
void change(int orig) {
    orig = 20;
    cout << "The value after change is" << orig ;
    cout << endl;
    return ;
}
