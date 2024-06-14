#include <iostream>
#include <string>

using namespace std;
//pass by value - created a copy of num1 and gave it to the addition function
int addition(int num1){
    cout << num1 << endl;
    num1 += 5;
    cout << num1 << endl;
    num1 += 5;
    cout << num1 << endl;
    return 0;
} 

// pass by rerfernce - we are passing the address of the value num1
int addition2(int &num1){
    cout << num1 << endl;
    num1 += 5;
    cout << num1 << endl;
    num1 += 5;
    cout << num1 << endl;
    return 0;
} 

int main(){
    int num1;
    num1 = 10;
    addition(num1);
    cout << num1 << endl;
    addition2(num1);
    cout << num1;
    return 0;
}