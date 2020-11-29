#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,lcm;
	cin>> a >> b;
	lcm = (a>b)?a:b;
	while(1) {
		if(lcm%a == 0 && lcm%b == 0) {
			cout << "LCM is: " << lcm;
			break;
		}
		else {
			++lcm;
		}
	}
	return 0;
}
