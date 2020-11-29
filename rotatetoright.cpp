#include <bits/stdc++.h>
using namespace std;

void one(int arr[], int n)
{
int temp = arr[n-1],i;
    for(i=n-1;i>0;i--)
    arr[i] = arr[i-1];
    arr[0] = temp;
}

void rotate(int arr[], int times, int n)
{
for (int i = 0; i < times; i++)
one(arr, n);
}

int main(){
    int arr[100]={};
    int test,n,times,num;
    cin>> test;
        for(int i=0;i<test;i++){
            cout<< "enter size of array:";
            cin>>n;
            cout<< "enter no of rotations";
            cin>>times;
            for(int j=0;j<n;j++){
                cin>>arr[j];
            }
            rotate(arr,times,n);
            for(int i=0;i<n;i++){
                cout<< arr[i] << " ";
            }
        }
    return 0;
}