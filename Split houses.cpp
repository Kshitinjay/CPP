#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<char> grid;
    char ch;
    string x;
    int N;
    cin>> N;
    for(int i = 0;i<N;i++) {
        cin>> ch;
        grid.push_back(ch);
    }
    for(int i =0;i<grid.size();i++) {
        if(grid[i-1] == '.' or grid[i+1] == '.' ) {
            x = "YES";
        }
        else {
            x = "NO";
        }
    }
    for(int i =0;i<grid.size();i++) {
        if(grid[i] == '.') {
            grid[i] = 'B';
        }
    }
    cout << x <<endl;
    for(int i =0;i<grid.size();i++) {
        cout<<grid[i];
    }
    return 0;
}
