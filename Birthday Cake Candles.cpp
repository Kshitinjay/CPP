#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,age,max = 0,count = 0;
    vector<int> ar;

    cin >> age;
    for(int i = 0; i < age; i++){
        cin >> a;
        if(max<=a)
        ar.push_back(max = a);
    }

    for(int i = 0; i < ar.size(); i++){
        if(max == ar[i])
        count++;
    }
    cout << count << endl;
}
