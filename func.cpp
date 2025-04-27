#include<iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Call the add function and print the result
    cout << "Sum: " << add(num1, num2) << endl;
    
    return 0;
}