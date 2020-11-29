#include <bits/stdc++.h>
using namespace std;
int main(){
    int c1=0,c2=0;
    string s;
    cin>>s;
    if(s.length()<=100){
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                c2=0;
                c1++;
                if(c1==6){
                    cout<< "Sorry, sorry!" <<endl;
                    break;
                }
            }
            else if(s[i]=='1') {
                c1=0;
                c2++;
                if(c2==6){
                    cout<< "Sorry, sorry!" <<endl;
                    break;
                }
            }
        }
        if(c1!=6 && c2!=6){
            cout << "Good luck!" << endl;
        }
    }
}
