#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    int x = 0;
    int limit;
    cin >> limit;
    for(int i=0;i<test;i++) {
        while(x<limit) {
            int i = 1;
            i = i * i;
            x++;
        }
        cout << i << endl;
    }
}
