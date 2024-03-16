#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    char choice;
    double temperature;

    do {
        cout << "Choose conversion type (Enter C for (C to F) & F for (F to C): ";
        cin >> choice;

        cout << "Enter temperature: ";
        cin >> temperature;

        switch (choice) {
            case 'C':
            case 'c':
                cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit\n";
                break;
            case 'F':
            case 'f':              
                cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius\n";
                break;
            default:
                cout << "Invalid choice. Please enter C, c, F, or f.\n";
        }

        cout <<"\nDo you want to convert another temperature? (y or n) : ";
        cin >>choice;

    } while (choice == 'y' || choice == 'Y');

    cout <<"\nThanks for using the temperature converter. Goodbye!\n";

    return 0;
}
