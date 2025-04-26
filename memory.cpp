#include<iostream>
using namespace std;

int main() {
    // Declare a pointer
    int *p;
    
    // Allocate memory for an integer
    p = new int;
    
    // Assign a value to the allocated memory
    *p = 42;
    
    // Print the value
    cout << "Value: " << *p << endl;
    
    // Deallocate the memory
    delete p;
    
    return 0;
}