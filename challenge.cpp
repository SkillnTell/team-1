/*
====================================================
        🧠 C++ TEAM COLLABORATION EXERCISE
====================================================

This project is divided into 3 simple tasks for 3 team members.

Each member should work on a separate Git branch, 
implement their part, and then push + create a pull request.

💡 The final program should:
    1️⃣ Ask the user for 2 integers.
    2️⃣ Calculate and display their sum, difference, and product.

----------------------------------------------------
⚙️ Instructions:
----------------------------------------------------
👤 Member 1 (Branch: task1_input)
    → Implement a function to take 2 integers from the user.

👤 Member 2 (Branch: task2_calculations)
    → Implement functions that return the sum, difference, 
      and product of the 2 integers.

👤 Member 3 (Branch: task3_display)
    → Implement a function that displays all results in a clear format.

After all PRs are merged, the program should compile and run correctly.

====================================================
*/

#include <iostream>
using namespace std;

// ======== Task 1: Get user input (Member 1) ========
void getInput(int &a, int &b) {
    // TODO: Ask user to enter two integers and store them in a and b
    // Example:
    // "Enter two numbers: "
}


// ======== Task 2: Calculations (Member 2) ========
int getSum(int a, int b) {
    int sum=a+b;
    return sum;
}

int getDifference(int a, int b) {
    int difference=a-b;

    return difference;
}

int getProduct(int a, int b) {
    int product= a*b;
    return product;
}


// ======== Task 3: Display results (Member 3) ========
void displayResults(int a, int b, int sum, int diff, int prod) {
    // TODO: Display all results in a formatted way
    // Example:
    // "Numbers: 5 and 3"
    // "Sum: 8"
    // "Difference: 2"
    // "Product: 15"
}


int main() {
    int a, b;

    // Step 1: Get input
    getInput(a, b);

    // Step 2: Perform calculations
    int sum = getSum(a, b);
    int diff = getDifference(a, b);
    int prod = getProduct(a, b);

    // Step 3: Display results
    displayResults(a, b, sum, diff, prod);

    return 0;
}
