// Copyright (c) 2021 Titwech wal All rights reserved.
// Created By: Titwech Wal
// Date: May.5.2022

// This function lets you enter a temperature in degrees
// Celsius (as a decimal), and converts and displays
// the temperature in Farenheit.

#include <iostream>

void calculateFahrenheit() {
    int celsius;
    int farenheit;

    // get user input
    std::cout << "Enter a number in celsius to convert: ";
    std::cin >> celsius;
    std::cout << "" << std::endl;

    // convert to farenheit
    farenheit = (9/5) * celsius + 32;

    // display farenheit
    std::cout << celsius << "°C is equal to " << farenheit << "°F" << std::endl;

    std::cout << "" << std::endl;
}

int main() {
    try {
        calculateFahrenheit();
    }
    catch (std::invalid_argument) {
        std::cout << "Please enter a vaild number";
    }
}
