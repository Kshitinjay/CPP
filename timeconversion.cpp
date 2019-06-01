#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main() {
    int hh,mm,ss;
    char t[3];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,&t);
    if(strcmp(t,"AM")==0 && hh==12) {
        hh=0;
    }
    if(strcmp(t,"PM")==0 && hh!=12) {
        hh = hh + 12;
    }
    cout << setfill('0') << setw(2) << hh <<":" << setfill('0') << setw(2)<< mm <<":" << setfill('0') << setw(2)<< ss;
}

