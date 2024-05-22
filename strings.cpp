#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    string s = "dhaya";
    int len = size(s);
    s[len-5] = 'D';
    cout<<s;
}