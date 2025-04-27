#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    int choice;
    float temperature, result;

    // Display menu
    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Convert Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            result = fahrenheitToCelsius(temperature);
            printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, result);
            break;
        
        case 2:
            // Convert Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            result = celsiusToFahrenheit(temperature);
            printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, result);
            break;
        
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }

    return 0;
}

