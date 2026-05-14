// Given two strings S1 and S2, having length N and M respectively.
// Print the count of common characters from S1, which are present also present in S2.
// Duplicate characters in S1 should be counted only once, and small and capital letters are considered different characters.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    set<char> set1(s1.begin(), s1.end());
    set<char> set2(s2.begin(), s2.end());

    int count = 0;
    for (char c : set1)
    {
        if (set2.count(c))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}