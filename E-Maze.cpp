#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int x=0,y=0;
    cin>> s;
    for(int i = 0;i<s.size();i++) {
        if(s[i]=='L') {
            x = x - 1;
        }
        else if(s[i] =='R') {
            x = x + 1;
        }
        else if(s[i]=='U') {
            y = y + 1;
        }
        else {
            y = y - 1;
        }
    }
    cout<< x << " " << y;
    return 0;
}
