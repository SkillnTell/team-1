/*
====================================================
        🧠 C++ TEAM COLLABORATION EXERCISE
====================================================

This project is divided into 5 simple tasks for 5 team members.

Each member should work on a separate Git branch, 
implement their part, and then push + create a pull request.

💡 The final program should:
    1️⃣ Ask the user for 2 integers.
    2️⃣ Calculate their sum.
    3️⃣ Calculate their difference.
    4️⃣ Calculate their product.
    5️⃣ Display all results neatly.

----------------------------------------------------
⚙️ Instructions:
----------------------------------------------------
👤 Member 1 (Branch: task1_input)
    → Implement a function to take 2 integers from the user.

👤 Member 2 (Branch: task2_sum)
    → Implement a function that returns the sum of the 2 integers.

👤 Member 3 (Branch: task3_difference)
    → Implement a function that returns the difference between the 2 integers.

👤 Member 4 (Branch: task4_product)
    → Implement a function that returns the product of the 2 integers.

👤 Member 5 (Branch: task5_display)
    → Implement a function that displays all results in a clear format.

After all PRs are merged, the program should compile and run correctly.

====================================================
*/

#include <iostream>
using namespace std;

// ======== Task 1: Get user input (Member 1) ========
void getInput(int &a, int &b) {
    // TODO: Ask user to enter two integers and store them in a and b
    // Example output:
    // "Enter two numbers: "
}


// ======== Task 2: Calculate sum (Member 2) ========
int getSum(int a, int b) {
    // TODO: Return the sum of a and b
    return 0;
}


// ======== Task 3: Calculate difference (Member 3) ========
int getDifference(int a, int b) {
    // TODO: Return the difference (a - b)
    return 0;
}


// ======== Task 4: Calculate product (Member 4) ========
int getProduct(int a, int b) {
    // TODO: Return the product of a and b
    return 0;
}


// ======== Task 5: Display results (Member 5) ========
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

    // Step 2–4: Perform calculations
    int sum = getSum(a, b);
    int diff = getDifference(a, b);
    int prod = getProduct(a, b);

    // Step 5: Display results
    displayResults(a, b, sum, diff, prod);

    return 0;
}
