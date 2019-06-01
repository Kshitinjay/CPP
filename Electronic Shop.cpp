#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    int b,n,m,keyval,uval,count=-1;
    vector<int> key;
    vector<int> usb; 
    cout << "enter the Budget,keyboar,usb"; // budjet of the buyer
    cin>>b>>n>>m;
    if(n>=1 and n<=1000 and m>=1 and m<=1000) {
        cout<< "Enter the price of Keyboards" << endl; //price of keyboards
        for(int i=0;i<n;i++) {
            cin>> keyval;
            key.push_back(keyval);
        }
        cout<< "Enter the price of Usb" << endl;  // price of usb 
        for(int i=0;i<m;i++) {
            cin>> uval;
            usb.push_back(uval);
        }
        sort(key.begin(), key.end(), greater<int>()); // sorting keyboard price
        sort(usb.begin(), usb.end(), greater<int>()); // sorting usb price
        for(int i=0;i<usb.size();i++) {
            for(int j=0;j<key.size();j++) {
                if(key[i]+usb[j]<=b) {
                    count=max(count,key[i]+usb[j]);
                }
            }
        }
        cout<< count;
    }
}