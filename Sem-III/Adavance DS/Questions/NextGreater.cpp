//Next Greater Element 

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);  // initialize with -1
    stack<int> st;              // stack to store elements

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop smaller or equal elements
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // If stack not empty, top is next greater
        if (!st.empty()) {
            result[i] = st.top();
        }

        // Push current element
        st.push(arr[i]);
    }

    return result;
}

// Example usage
int main() {
    vector<int> arr = {1, 3, 2, 4};
    vector<int> ans = nextGreaterElement(arr);

    for (int x : ans) cout << x << " ";
    return 0;
}
