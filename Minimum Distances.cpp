#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k=0,c=-1;
    cout << "Enter size of the array";
    cin>> n;
    int arr[n];
    int arrb[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                c=i-j;
                if(c<0){
                    c=-1*c;
                    arrb[k]=c;
                    k++;
                }
            }
        }
    }
    int min=arrb[0];
    if(c == -1)
        min=c;
    else{
     for(int i=0;i<k;i++){
      if(arrb[i] < min)
         min=arrb[i];
     }
    }
    cout<<min<<endl;
    
    return 0;
}