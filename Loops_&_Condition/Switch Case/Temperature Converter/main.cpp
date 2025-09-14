#include <iostream>
using namespace std;

// Define conversion constants
const double celToFahMult = 9.0 / 5.0;
const double fahToCelMult = 5.0 / 9.0;
const int fahOffset = 32;

int main() {
    int choice;
    double temp, converted;

    // Repeat until user chooses to exit
    while (true) {
        // Display menu
        cout << "\nTemperature Converter\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        // Exit condition
        if (choice == 3) {
            cout << "Exiting temperature converter.\n";
            break;
        }

        // Celsius to Fahrenheit
        if (choice == 1) {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            converted = (temp * celToFahMult) + fahOffset;
            cout << temp << " C = " << converted << " F\n";
        }
        // Fahrenheit to Celsius
        else if (choice == 2) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            converted = (temp - fahOffset) * fahToCelMult;
            cout << temp << " F = " << converted << " C\n";
        }
        // Invalid choice
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
