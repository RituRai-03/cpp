#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << A << " to " << C << endl;
        return;
    }
    towerOfHanoi(n - 1, A, C, B);
    cout << "Move disk " << n << " from " << A << " to " << C << endl;
    towerOfHanoi(n - 1, B, A, C);
}

int main()
{
    int n;
    cout << "Enter no. of Disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
