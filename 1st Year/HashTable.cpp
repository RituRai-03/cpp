#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

struct HashTable {
    int size;
    node** table;
};


HashTable* createHashTable(int size) {
    HashTable* table = new HashTable;
    table->size = size;
    table->table = new node*[size];
    for (int i = 0; i < size; i++) {
        table->table[i] = nullptr;
    }
    return table;
}

int hashFunction(int key, int size) {
    return key % size;
}

//Insertion in Hash Table 
void insert(HashTable* table, int key) {
   int index = hashFunction(key, table->size);
    node* newnode = new node{key, nullptr};
    if (table->table[index] == nullptr) {
        table->table[index] = newnode;
    } else {
        node* temp = table->table[index];
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// Search in Hash Table
bool search(HashTable* table, int key)
{
    int index = hashFunction(key, table->size);
    node* temp = table->table[index];
    while (temp != nullptr) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Delete from Hash Table

void deleteKey(HashTable* table, int key) {
    int index = hashFunction(key, table->size);
    node* temp = table->table[index];
    node* prev = nullptr;
    while (temp != nullptr) {
        if (temp->data == key) {
            if (prev == nullptr) {
                table->table[index] = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    };

}


int main() {
    HashTable* table = createHashTable(10);

    insert(table, 15);
    insert(table, 25);
    insert(table, 35);

    cout << "Search for 25: " << (search(table, 25) ? "Found" : "Not Found") << endl;
    cout << "Search for 30: " << (search(table, 30) ? "Found" : "Not Found") << endl;

    deleteKey(table, 25);
    cout << "Search for 25 after deletion: " << (search(table, 25) ? "Found" : "Not Found") << endl;

    return 0;
}


