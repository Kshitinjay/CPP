#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int len,count=1;
    cout << "Enter the string";
    cin>> str;
    len = str.length();
    for(int i=0;i<len;i++) {
        if(str[i]>=65 and str[i]<=90) {
            count++;
        }
    }
    cout<< count;
}