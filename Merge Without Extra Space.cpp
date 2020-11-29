#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> arr1 = {}; 
        vector<int> arr2 = {};
        int s1,s2,num;
        cin>>s1>>s2;
        vector<int> arr3(s1+s2); 
        for(int i=0;i<s1;i++){
            cin>>num;
            arr1.push_back(num);
        }
        for(int i=0;i<s2;i++){
            cin>>num;
            arr2.push_back(num);
        }
        merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
        for(int i=0;i<arr1.size();i++){
            arr1[i]=arr3[i];
        }   
        int k=0;
        for(int i=arr1.size();i<arr3.size();i++){
            arr2[k]=arr3[i];
            k++;
        }
        for(int i=0;i<arr1.size();i++){
            cout<<arr1[i] <<" ";
        }
        for(int i=0;i<arr2.size();i++){
            cout<<arr2[i] <<" ";
        }
        cout<<endl;
    }
    return 0; 
}