// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created By: Julien Lamoureux
// Date: November 26, 2023
// This program displays a sin or tan table for angles between 0 and 360

#include <cmath>
#include <iostream>
#include <iomanip>


int main() {
    // declare variables
    std::string userTableChoiceStr;
    int counter, userTableChoiceInt;
    float sinTanProduct;

    // ask the user what table they would like to see
    std::cout << "This program displays a sin or tan table of all angles ";
    std::cout << "from 0 to 360. Press 1 for the ";
    std::cout << "sin table and 2 for the tan table: ";
    std::cin >> userTableChoiceStr;

    // initialize sinTanProduct and counter to 0
    counter = 0;
    sinTanProduct = 0;

    try {
        // convert user table choice to an int
        userTableChoiceInt = std::stoi(userTableChoiceStr);

        // if the choice is 1, then use a while loop to find the sin table
        if (userTableChoiceInt == 1) {
             while (counter <= 360) {
                 // calculate the sine of the counter
                 sinTanProduct = sin(counter);

                 // display the sin product
                std::cout << "sin " << counter
                << " radians = " << std::fixed << std::setprecision(2)
                << std::setfill('0') << sinTanProduct << std::endl;

                 // increment the counter
                 counter++;
             }
        } else if (userTableChoiceInt == 2) {
            // otherwise if choice = 2, then use a for loop for the tan table
            for (counter = 0; counter <= 360; counter++) {
                // calculate the tan of the counter
                sinTanProduct = tan(counter);

                // display the tan product
                std::cout << "tan " << counter
                << " radians = " << std::fixed << std::setprecision(2)
                << std::setfill('0') << sinTanProduct << std::endl;
            }
        } else {
            // otherwise, tell them to enter 1 or 2
            std::cout << " Please enter 1 or 2 for your table choice."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        // if user table choice cannot be an int, tell the user to enter one
        std::cout << userTableChoiceStr
        << " is not a valid integer, please enter one." <<
        std::endl;
    }
}
