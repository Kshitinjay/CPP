#include <bits/stdc++.h>
using namespace std;

int main() {
    int height = -1;
    int len;
    int heights[26];
    string str;
    for(int i=0;i<26;i++) {
        cin>> heights[i];
    }
    cout << "Enter the string" ;
    cin>> str;
    len = str.length();
    for(int i=0;i<len;i++) {
        if(heights[str[i]-'a'] > height)
        height = heights[str[i]-'a'];
    }
    cout << len*height << endl;
    return 0;
}
