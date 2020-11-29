#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str,newstr,str3;
    int n;
    long count = 0;
    cout << "Enter the string" << endl;
    cin >> str;
    cout << "Enter the n" << endl;
    cin >> n;
    for(int i=0;i<n;i++) {
        newstr = newstr + str;
    }
    std::cout << newstr.length() << std::endl;
    str3 = newstr.substr(0,n);
    std::cout << str3.size() << std::endl;
    for(int j=0;j<=str3.length();++j){
        if(str3[j]=='a'){
            count++;
        }
    }
    cout << count;
    return 0;
}
