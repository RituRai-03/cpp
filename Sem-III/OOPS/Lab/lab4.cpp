// 4	Write a program using modern C++ features such as auto and range-based for loop to traverse and display elements of a collection.	1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Using auto
    cout << "Using auto:" << endl;
    auto first = numbers[0];
    cout << first << endl;

    // Using range-based for loop
    cout << "\nUsing range-based for loop:" << endl;
    for (int element : numbers)
    {
        cout << element << " ";
    }

    cout << endl;

    return 0;
}