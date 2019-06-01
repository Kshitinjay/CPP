#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int size;
    int input,ans;
    int sum1=0,sum2=0;
    cin >> size;
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            cin >> input;
            if(i==j) {
                sum1 = sum1 + input;
            }
            if(i+j==(size-1)) {
                sum2 = sum2 + input;
            }
        }
    }
    cout << sum1 << endl;
    cout << sum2 << endl;
    ans = abs(sum1-sum2);
    cout << ans;
}
