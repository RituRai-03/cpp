//Given N integers. create a dictionary with the intergers as keys and their squares as values. Then print the dictionary.
// constraints:1<=N<=10^5, -10^6<=arr[i]<=10^6

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin>>N;
   
    map<int, long long>mp;

    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        mp[num]=1LL*num*num;
    }
   
    for(auto pair:mp){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    return 0;


}
