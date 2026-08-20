
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (auto it : s) {
            if (it == '(') {
                st.push(it);
            } else {
                if (st.empty()) return false;
                char ch = st.top();
                st.pop();

                if (it == ')' && ch == '(') {
                    continue;
                } else {
                    return false;
                }
            }
        }
        
        return st.empty(); 
    }
};



//Min no. of Brackets to add to make the given string valid.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char> st;
    int count = 0;
    for (char c : s){
        if(c == '(')
         st.push(c);
         else{
            if (!st.empty())
             st.pop();
            else
              count ++;
         }
    }
    count += st.size();
    cout << count;
    return 0;
}