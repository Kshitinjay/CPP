// this program counts number of +ve -ve and zeros in an 1-d array
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int arr[100];
    int size;
    cin >> size;
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    double total1;
    double total2;
    double total3;
    for(int i=0;i<size;i++) {
        cin >> arr[i];
    }
    for(int i =0;i<size;i++) {
        if(arr[i]>=1) {
            counter1++;
        } else if(arr[i]<0) {
            counter2++;
        }
        else if(arr[i]==0){
            counter3++;
        }
    }
    total1 = (double)(counter1)/(size);
    cout << setprecision(6) << total1;
    cout << " " << endl;
    total2 = (double)(counter2)/(size);
    cout << setprecision(6) << total2;
    cout << " " << endl;
    total3 = (double)(counter3)/(size);
    cout << setprecision(6) << total3;
    cout << " " << endl;

    return 0;
}
