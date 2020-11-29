#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n,x,y;
    set<int> se;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        switch (x) {
            case 1:
                se.insert(y);
                break;
            case 2:
                se.erase(y);
                break;
            case 3:
                cout << (se.find(y) == se.end() ? "No" : "Yes") << endl;
                break;
        }
    }
    return 0;
}



