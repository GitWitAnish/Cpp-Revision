// Replace ___ with your code below

#include <iostream>
using namespace std;

// create the calculate_average() function
double calculate_average(int mark1, int mark2, int mark3){
    double avg = mark1+mark2+mark3;
    double a=avg/3;
    return a;
}

int main() {

    // declare variables to store marks
    int mark1, mark2, mark3;

    // take user input for marks
    cin >> mark1 >> mark2 >> mark3;

    // call the function with arguments mark1, mark2, and mark3  
    double average_marks = calculate_average(mark1, mark2, mark3);

    cout << average_marks;

    return 0;

}