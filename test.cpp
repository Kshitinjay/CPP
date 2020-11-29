#include <bits/stdc++.h>
using namespace std;
int main(){
    char temp;
    char s[100];
    cin >> s;
    int n = strlen(s);
    for(int i = 0;i<n-1;i++) {
        for(int j = i+1;j<n;j++) {
            if(s[i]>s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout << s;
}
