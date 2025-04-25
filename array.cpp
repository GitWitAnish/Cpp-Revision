#include <iostream>
using namespace std;

int main() {
    int myNum[3] = {10, 20, 30};
    cout << myNum[0] << endl;
    cout << myNum[1] << endl;
    cout << myNum[2] << endl;
    cout << "Size of myNum: " << sizeof(myNum) << endl;
    cout << "Size of myNum[0]: " << sizeof(myNum[0]) << endl;
    cout << "Total number of elements:" << sizeof(myNum)/sizeof(myNum[0]) << endl;



    for (int i = 0; i < 5; i++) {
        cout << myNum[i] << "\n";
      }
  return 0;
}