#include <iostream>
using namespace std;

int main() {
    int count = 0;
    const char limit = '\n';
    char str;
    cout << "Enter the string" << endl;
    cin >> str;
    while(str!=limit) {
        count ++;
        cout << count << endl;
        cin >> str;
    }
    // cout << count << endl;
}
