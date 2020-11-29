#include <bits/stdc++.h>
using namespace std;
int calculatePower(int,int);
int main(){
    int num,power,result;
    cout << "Enter number and power";
    cin >> num ;
    cin >> power;
    result = calculatePower(num,power);
    cout << "Answer is:" << result;
    return 0;
}
int calculatePower(int num,int power){
    if(power!=0){
        return (num*calculatePower(num, power-1));;
    }
    else {
        return 1;
    }
}