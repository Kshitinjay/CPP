#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,sum=0;
	cout << "Enter the limit to sum up all: ";
	cin >> n;
	if(n<1) {
		cout << sum;
	}
	else {
		for(int i=1;i<=n;i++) {
			sum = sum + i;
		}
		cout << sum;	
	}
	
}
