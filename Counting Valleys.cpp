#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,up=0,count=0;
    char c;
    cin >> n;
    for(int i=0;i++<n;){
        cin >>c;
        if(c=='U')up++;
        else up--;
        if(up==0 && c=='U')count++;
    }
    cout << count << endl;
    return 0;
}