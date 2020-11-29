#include <bits/stdc++.h>
using namespace std;
string findMaximumNum(string str, int n, int k)
{
    for (int i = 0; i < n; i++) {
        if (k < 1)
            break;
        if (str[i] != '9') {
            str[i] = '9';
            k--;
        }
    }
    return str;
}
int main()
{
    string str;
    int k;
    cin>> str;
    cin>> k;
    int n = str.length();
    cout << findMaximumNum(str, n, k);
    return 0;
}
