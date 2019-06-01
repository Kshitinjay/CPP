#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr;
  int n, val;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> val;
    arr.push_back(val);
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
