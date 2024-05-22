#include <iostream>
#include <string>

using namespace std;

int addition(int num1){
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
    cout << num1;
    return 0;
}