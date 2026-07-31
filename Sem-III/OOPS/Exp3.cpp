//write a program in c++ for "pass by value" in function calling. 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10, y = 20, z;
    int sum(int *val1, int *val2);
    z = sum(&x, &y);
    return 0;
}

int sum(int *val1, int *val2){
    int a = (*val1) + (*val2);
    return a;
}