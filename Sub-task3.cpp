#include <iostream> // Syntax Error: Corrected the include directive by adding #
#include <iomanip>  // Syntax Error: Included iomanip for fixed and setprecision

using namespace std;

const int NUM_EXPERIMENTS = 3;
const int NUM_READINGS = 3;

int main() { // Syntax Error: Changed return type from float to int
    int i, j; // Logic Error: Changed type from char to int for loop counters
    double readingValue, total, average;

    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0; // Initialize total for each experiment
        cout << "\nEXPERIMENT " << i << endl;
        cout << "===================\n";

        for (j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: ";
            cin >> readingValue;
            total += readingValue; // Logic Error: Corrected the total calculation from subtraction to addition
        }

        average = total / NUM_READINGS; // Logic Error: Corrected average calculation by removing unnecessary addition

        // Evaluation logic based on average
        if (average < 90) { // Logic Error: Corrected condition to match the intended logic
            cout << "Experiment " << i << " average: "
                << fixed << setprecision(2)
                << average << " is Below acceptable range\n";
        }
        else if (average >= 90 && average <= 100) { // Logic Error: Adjusted condition for clarity and correctness
            cout << "Experiment " << i << " average: "
                << fixed << setprecision(2) << average
                << " is Within acceptable range\n";
        }
        else {
            cout << "Experiment " << i << " average: "
                << fixed << setprecision(2) << average
                << " is Above acceptable range\n";
        }
    }

    return 0; // Return 0 to indicate successful execution
}
