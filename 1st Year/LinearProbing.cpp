//LINEAR PROBING

#include <iostream>
using namespace std;
class HashTable {
    public:
    int size;
    int* table;
    
    HashTable(int s) {
        int size = 10;
        size = s;
        table = new int[size]; 
        for (int i = 0; i < size; i++) {
            table[i] = 0; 
        }
    }  
};

//Insertion in Hash Table using Linear Probing

void insert(HashTable* hashTable, int key) {
    int index = key % hashTable -> size;
    while (hashTable -> table[index] !=0){
        index = (index +1) % hashTable -> size;
  
    }
    hashTable -> table[index] = key;
}


//Search in Hash Table using Linear Probing

void search (HashTable* hashTable, int key) {
    int index = key % hashTable -> size;
    while (hashTable -> table[index] != 0){
        if (hashTable -> table[index]==key){
            cout << "element found" << endl;
            return;
        }
        else {
            index = (index +1) % hashTable -> size;
            if (hashTable -> table[index] == 0){
            cout << "element not found" << endl;
            return;
            }
        }
    }
}

int main() {
    HashTable* hashTable = new HashTable(10);
    insert(hashTable, 5);
    insert(hashTable, 15);
    insert(hashTable, 25);
    search(hashTable, 5);
    search(hashTable, 10);
    search(hashTable, 25);
    search(hashTable, 35);
    return 0;
}



