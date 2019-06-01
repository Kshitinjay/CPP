#include <iostream>
using namespace std;
int main() {
    int cat_A,cat_B,mouse,q;
    cout << "Enter number of query:";
    cin>>q;
    if(q>=1 and q<=100) {
        for(int i=0;i<q;i++) {
        cin >>cat_A>>cat_B>>mouse;
        if((abs(cat_A-mouse))<(abs(cat_B-mouse))) {
            cout <<"Cat A";
        } else if((abs(cat_B-mouse))<(abs(cat_A-mouse))) {
            cout << "cat B";
        }else if((abs(cat_B-mouse)) == (abs(cat_A-mouse))) {
            cout << "Mouse C";
        }
    }
    }
}
