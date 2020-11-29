#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int D,Oc,Of,Od,Cs,Cb,Cm,Cd,online,offline;
    cin>>D;
    cin>> Oc >> Of >> Od;
    cin>> Cs >> Cb >> Cm >> Cd;
    online = Oc + (D-Of)*Od;
    offline = Cb + ((D/Cs)*Cm)+(D*Cd);
	if(online==offline) {
		cout << "Online Taxi";
	}
	else if(online<offline){
		cout << "Online Taxi";
	}
	else if(online<0){
		cout << "Classic Taxi";
	}
	else {
		cout << "Classic Taxi";
	}
}