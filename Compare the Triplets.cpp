/* enter array 1 and array2 with 3 elements only and compare a0,b0
a1,b1 a2,b2 any give score to them who is greater */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int alice =0;
    int bob =0;
    int arra[100];
    int arrb[100];
    for(int i=0;i<3;i++) {
        cin >> arra[i];
    }
    for(int i=0;i<3;i++) {
        cin >> arrb[i];
    }
    for(int i=0;i<3;i++) {
        if(arra[i]>arrb[i]) {
            alice = alice + 1;
        } else if(arra[i]<arrb[i]) {
            bob = bob +1;
        } else {
            continue;
        }
    }
    cout << alice << " " << bob;


}
