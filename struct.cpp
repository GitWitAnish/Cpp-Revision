#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // Declare a structure
    struct Car {
        string brand;
        string model;
        int year;
    };
    
    // Create a Car object
    Car myCar;
    
    // Assign values to the members of myCar
    myCar.brand = "BMW";
    myCar.model = "X5";
    myCar.year = 1999;
    
    // Print the members of myCar
    cout << myCar.brand << " " << myCar.model << " " << myCar.year << "\n";
    

return 0;
    
}














