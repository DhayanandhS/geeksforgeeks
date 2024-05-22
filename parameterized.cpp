#include <iostream>
#include <string>
using namespace std;

// Define the printName function
string printName(string name1, string name2) {
    return name1 + " " + name2;
}

int main() {
    string name1, name2;
    
    // Read two names from the input
    cout << "Enter two names separated by space: ";
    cin >> name1 >> name2;
    
    // Call the printName function
    string res = printName(name1, name2);
    
    // Output the result
    cout << res << endl;
    
    return 0;
}