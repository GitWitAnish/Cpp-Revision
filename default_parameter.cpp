#include<iostream>
using namespace std;

int add(int a, int b = 5) {
    return a + b;
}
int main() {
    int num1;
    
    // Input one number
    cout << "Enter a number: ";
    cin >> num1;
    
    // Call the add function with default parameter
    cout << "Sum with default parameter: " << add(num1) << endl;
    
    // Call the add function with two parameters
    cout << "Sum with two parameters: " << add(num1, 10) << endl;
    
    return 0;
}