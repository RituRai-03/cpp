// // #include <iostream>
// // using namespace std;

// // #define SIZE 10
// // int table[SIZE];

// // void insert(int key) {
// //     int index = key % SIZE;
// //     // Linear Probing: find next empty slot (-1)
// //     while (table[index] != -1) {
// //         index = (index + 1) % SIZE;
// //     }
// //     table[index] = key;
// // }

// // int main() {
// //     for (int i = 0; i < SIZE; i++) table[i] = -1; // Initialize table

// //     insert(12);
// //     insert(22); // Collision with 12, will move to next index
// //     insert(35);

// //     cout << "Hash Table Content:" << endl;
// //     for (int i = 0; i < SIZE; i++) {
// //         if (table[i] != -1) cout << i << " -> " << table[i] << endl;
// //         else cout << i << " -> Empty" << endl;
// //     }
// //     return 0;
// // }



// //Map Creation

// // #include <bits/stdc++.h>
// // using namespace std;

// // vector<int> vec = {1,2,2,3,5,6,1,8};
// // unordered_map<int,int> myMap;
// // for(int num : vec) {
// //     myMap[num]+=1;
// // }


// // Map, a basic program with basic operations

// #include <iostream>
// #include <map>
// #include <unordered_map>
// using namespace std;

// int main(){
//     map<int, string> map1, map2;

//     map1[1] = "A";
//     map1[2] = "B";
//     map1[3] = "C";

//     map2[4] = "D";  
//     map2[5] = "E";


//     // Accessing elements
//     cout << "Map1[2]: " << map1[2] << endl;
//     // Iterating through map1
//     cout << "Contents of Map1:" << endl;
//     for (const auto& pair : map1) {
//         cout << pair.first << " -> " << pair.second << endl;
//     }
//     cout << "Contents of Map2:" << endl;
//     for (const auto& pair : map2) {
//         cout << pair.first << " -> " << pair.second << endl;
//     }

//     // Merging map2 into map1
//     map1.insert(map2.begin(), map2.end());
//     cout << "Contents of Map1 after merging Map2:" << endl;
//     for (const auto& pair : map1) {
//         cout << pair.first << " -> " << pair.second << endl;
//     }


//     int key =2;
//     auto it = map1.find(key);
//     if (it != map1.end()) {
//         cout << key << " found, value: " << it->second << endl;
//     } else {
//         cout << key << " not found " << endl;
//     }

//     if(map1.count(key) > 0) {
//         cout << key << " exists in map1" << endl;
//     } else {
//         cout << key << " does not exist in map1" << endl;
//     }

//     return 0;
// }






#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int>mp;

    mp[5]=25;
    mp[1]=1;
    mp[3]=9;

    for(auto pair:mp){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    return 0;
}