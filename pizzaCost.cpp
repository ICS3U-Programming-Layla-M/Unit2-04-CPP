// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 5, 2021
// This program calculates and displays the total
// cost of a pizza using user input.

#include <iostream>
#include <iomanip>


int main() {
    // declare constants
    const float LABOUR_COST = 2;
    const float RENT_COST = 2.25;
    const float ING_COST = 1.5;
    const float HST = 0.13;


    // declare variables
    float diameter, subtotal, tax, total;

    // welcome message
    std::cout << "This will calculate the total cost for a pizza. \n";

    // get the user input
    std::cout << "Enter the diameter size (inches): ";
    std::cin >> diameter;

    // calculate the subtotal, tax and total
    subtotal = LABOUR_COST + RENT_COST + ING_COST * diameter;
    tax = subtotal * HST;
    total = subtotal + tax;


    // display the total
    std::cout << "The total cost (with HST) is: $" << std::fixed <<
    std::setprecision(2) << std::setfill('0') << total << std::endl;
}
