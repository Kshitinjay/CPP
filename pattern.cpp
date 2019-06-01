#include <iostream>
using namespace std;
int main() {
    int n,i,j;
    cout << "Enter the pattern size" ;
    cin >> n;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if(j>=7-i)
                cout << "#";
            else
                cout << " ";
        }
    cout << endl;
    }

}
