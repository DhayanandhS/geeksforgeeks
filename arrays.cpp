#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    //1D array
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[1]<<endl;

    //2D array
    int a[3][3];
    a[3][1]=5;
    cout<<a[3][1];
    // if we dont assgn values for others it will assign random GARBAGE VALUES every time
    // NOTE first one ROW second one is COLOUMN

    int array[5];
    for(int i=1;i<=5;i++){
        cin >> arr[i];
    }
    cout << array[1];
}