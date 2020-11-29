#include <iostream>
using namespace std;

int main() {
    int n,ans=1;
    cout<< "Enter any number to find the factorial" <<endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    cout<< n <<"!=" <<ans;
    return 0;
}
