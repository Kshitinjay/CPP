#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Wap to find the number whose sum and product is given //
int main() {
    int a,b,c,x;
    int sum;
    cout << "Enter the sum" << endl;
    cin >> sum;
    int pro;
    cout << "Enter the product" << endl ;
    cin >> pro;
    if(sum>0) {
        cout << "Quadratic eq formed is: x*x -"<< sum << "+" << pro << endl;
    } else {
        cout << "Quadratic eq formed is: x*x +"<< sum << "+" << pro << endl;
    }
    a =1;
    b =-sum;
    c=pro;
    cout << "Coefficients are :a=" << a << ",b=" << b << ",c=" << c << endl;
    double discriminant = b*b -4.0*a*c;
    double sqroot = sqrt(discriminant);
    double root1 = (-b + sqroot)/(2.0*a);
    double root2 = (-b - sqroot)/(2.0*a);
    cout << "Two number whose sum is " << sum << "& product is" << pro <<"are :"<< endl;
    cout << "number 1 :" << root1 << " " << "number 2:" << root2 << endl;
    return 0;

}
