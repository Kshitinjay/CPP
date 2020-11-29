#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> arr;
	int n;
	for(int i =0;i<10;i++) {
		cout << i << ":" ;
		cin>> n;
		arr.push_back(n);
	}
	for(int i=1;i<11;i++) {
		if(i==arr[i-1]) {
			continue;
		}
		else {
			cout << i;
		}
	}
	return 0;
}

