// // // // // 


// // // // #include <iostream>
// // // // using namespace std;

// // // // int main() {
// // // //     int n;
// // // //     cout << "Enter number of elements: ";
// // // //     cin >> n;

// // // //     int arr[n];
// // // //     cout << "Enter elements: " << endl;
// // // //     for (int i = 0; i < n; i++) {
// // // //         cin >> arr[i];
// // // //     }

// // // //     // Bubble Sort Logic
// // // //     for (int i = 0; i < n - 1; i++) {
// // // //         for (int j = 0; j < n - i - 1; j++) {
// // // //             if (arr[j] > arr[j + 1]) {
// // // //                 int temp = arr[j];
// // // //                 arr[j] = arr[j + 1];
// // // //                 arr[j + 1] = temp;
// // // //             }
// // // //         }
// // // //     }

// // // //     cout << "Sorted array" << endl;
// // // //     for (int i = 0; i < n; i++) {
// // // //         cout << arr[i] << " ";
// // // //     }

// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // //     int n;
// // //     cout << "Enter number of elements: ";
// // //     cin >> n;

// // //     int arr[n];
// // //     cout << "Enter elements!" << endl;
// // //     for (int i = 0; i < n; i++) {
// // //         cin >> arr[i];
// // //     }

// // //     // Selection Sort Logic
// // //     for (int i = 0; i < n - 1; i++) {
// // //         int min = i;
// // //         for (int j = i + 1; j < n; j++) {
// // //             if (arr[j] < arr[min]) {
// // //                 min = j;
// // //             }
// // //         }
// // //         // Swapping the elements
// // //         int temp = arr[i];
// // //         arr[i] = arr[min];
// // //         arr[min] = temp;
// // //     }

// // //     cout << "Sorted array: " << endl;
// // //     for (int i = 0; i < n; i++) {
// // //         cout << arr[i] << " ";
// // //     }

// // //     return 0;
// // // }


// // //  Counting Sort
// // #include <iostream>
// // using namespace std;

// // int main(){
// //     int n;
// //     cout << "Enter the length of the array: ";
// //     cin >> n;

// //     int arr[n];
// //     cout << "Enter the elements of the array: " ;
// //     for(int i = 0; i < n; i++){
// //         cin >> arr[i];

// //         int max = arr[0];
// //         for(int i = 1; i < n; i++){
// //             if(arr[i] > max){
// //                 max = arr[i];
// //             }
// //         }
// //         int count[max + 1] = {0};
// //         for(int i = 0; i < n; i++)
// //             count[arr[i]]++;
        
// //             int index = 0;
// //         for(int i = 0; i <= max; i++){
// //             while(count[i] > 0){
// //                 arr[index++] = i;
// //                 count[i]--;
// //             }

// //     }
// //     cout << "Sorted array: " << endl;
// //     for(int i = 0; i < n; i++){
// //         cout << arr[i] << " ";
// //     }

// //     return 0;
// // }

// // }


//                                                 //Radix Sort

// // #include <iostream>
// // using namespace std;

// // int main(){
// //     int n;
// //     cout << "Length of the Array: " ;
// //     cin >> n;

// //     int arr[n];

// //     cout << "Elements of the Array: " ;
// //     for (int i = 0; i < n; i++){
// //         cin >> arr[i];

// //         int max = arr[0];

// //         for(int i=1; i<n; i++){
// //             if(arr[i] > max){
// //                 max = arr[i];   
// //             }      
         
// //             int radix = 1;
// //             while(max/radix > 0){

// //                 int count[10] = {0};
// //                 for(int i =0; i<n; i++){
// //                     count[(arr[i]/radix)%10]++;

     

// //         }
     



// //     }




//                                                             //Bucket Sort 


// #include <iostream>
// using namespace std;

// int main(){
   
    

// }



                                                            //Singly Linked List

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;

// }

// int main(){

//     Node* head = new Node();
//     head-> data = 10;
//     head-> next = Null;


//     cout << head.data << endl;
//     cout << head.next << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node * First = new Node();
//     Node * Second = new Node();
//     Node * Third = new Node();

//     First->data = 10;
//     First.next = Second;

//     Second->data = 20;
//     Second.next = Third;

//     Third->data = 30;
//     Third.next = Null;

//     Node* temp = First;
//     while (temp != Null) {
//         cout << temp.data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }



//Insertion in Hash Table using array

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
        table->table[i] = NULL;
    }
    return table;
}

int hashFunction(int key, int size) {
    return key % size;
}

void insert(HashTable* table, int key) {
   int index = hashFunction(key, table->size);
    node* newnode = new node;
    newnode->data = key;
    newnode -> next = NULL;
    if (table->table[index] == NULL) {
        table->table[index] = newnode;
    } else {
        node* temp = table->table[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}