//Design a Program using pointers to objects and arrays of objectsto manage dynamic data structure

#include <iostream>
using namespace std;

class Process
{
    int pid;
    int burstTime;

public:
    void getData()
    {
        cout << "Enter Process ID: ";
        cin >> pid;

        cout << "Enter Burst Time: ";
        cin >> burstTime;
    }

    void display()
    {
        cout << "Process ID: " << pid
             << "\tBurst Time: " << burstTime << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

   
    Process *p = new Process[n];

   
    Process *ptr = p;

    
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Process " << i + 1 << endl;
        (ptr + i)->getData();
    }

    
    cout << "\n--- Process Details ---\n";

    for (int i = 0; i < n; i++)
    {
        (ptr + i)->display();
    }

   
    delete[] p;

    return 0;
}