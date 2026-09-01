//Create a class Employee with private data Members salary & bonus. Write a Friend function 
// calculate_total() that access these private members and returns the total compensation.

#include <iostream>
#include <string>
using namespace std;

// class Employee{
//     private:
//      double salary;
//      double bonus;
//     public:
//      Employee(double s, double b){
//         salary = s;
//         bonus = b;
//      }
//         friend double calculate_total(Employee emp);
// };

// double calculate_total(Employee emp){
//     return emp.salary + emp.bonus;
// }

// int main(){
//     Employee emp1(60000, 5000);
//     Employee emp2(85000, 12000);

//     cout <<" " << calculate_total(emp1) << endl;
//     cout <<" " << calculate_total(emp2) << endl;

//     return 0;

// }

//Create two classes Bank and Customer. The Bank class stores account balance and customer stores customer_name
// and Account_number. Write a friend function displayAccountInfo() that access private members of both classes
// and display Complete Account Information.

class Bank;

class Customer {
private:
    string customer_name;
    int account_number;

public:
    Customer(string name, int acc_num) {
        customer_name = name;
        account_number = acc_num;
    }

    friend void displayAccountInfo(Customer cust, Bank bank);
};

class Bank {
private:
    double account_balance;

public:
    Bank(double balance) {
        account_balance = balance;
    }

    friend void displayAccountInfo(Customer cust, Bank bank);
};

void displayAccountInfo(Customer cust, Bank bank) {
    cout << "Customer Name: " << cust.customer_name << endl;
    cout << "Account Number: " << cust.account_number << endl;
    cout << "Account Balance: " << bank.account_balance << endl;
}

int main() {
    Customer cust1("abc xyz", 1001);
    Bank bank1(2500.50);

    displayAccountInfo(cust1, bank1);

    return 0;
}