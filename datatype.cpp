
#include <iostream>
#include <string>

using namespace std;


class Solution {
  public:
    int dataTypeSize(std::string str) {
    if (str == "int" || str == "Integer") {
        return sizeof(int);
    } else if (str == "char" || str == "Character") {
        return sizeof(char);
    } else if (str== "float" || str == "Float") {
        return sizeof(float);
    } else if (str == "double" || str == "Double") {
        return sizeof(double);
    } else if (str == "long" || str == "Long") {
        return sizeof(long);
    }
    return 0; 
    }
};





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends