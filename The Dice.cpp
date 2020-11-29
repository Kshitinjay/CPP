#include <bits/stdc++.h>
using namespace std;
int main(){
    int c=0;
    string s;
    cin>>s;
    int x=s.length();
    for(int i=0;i<s.length();i++){
        if(s[i]!='6'){
            c++;
        }
        else if(s[i]=='6' && s[i+1]=='6'){
            i++;
        }
    }
    if(s[x-1]=='6'){
            cout << "-1";
    }
    else {
        cout << c;
    }
    return 0;
}
