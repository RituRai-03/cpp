//Given an array of N integers. 
// Print the unique elements from the array in increasing order. 
// Also print the count of unique elements.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int num : s) {
        cout << num << " ";
    }
    cout << endl;
    cout << s.size() ;
    return 0;

}