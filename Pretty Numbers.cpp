#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<int> count;
    int l,u,new_num,le,x = 0,t;
    string str;
    cin>>t;
    for(int i = 0;i<t;i++) {
        cin>>l;
        cin>>u;
        for(int i=l;i<=u;i++) {
            str = to_string(i);
            le=str.size();
            if(str[le-1] == '2' || str[le-1] == '3'|| str[le-1] == '9') {
                x = x + 1;
            }
        }
    count.push_back(x);
    x = 0;
    }
    for(int i =0;i<count.size();i++) {
        cout<<count[i] << endl;
    }
}
