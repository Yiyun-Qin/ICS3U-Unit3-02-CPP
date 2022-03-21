// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program with proper style

#include <iostream>

int main() {
    // This function calculates the cost of a pizza
    const int ANSWER = 6;
    int numberGuess;

    // input
    std::cout << "Enter the number you guess between 0 - 9: ";
    std::cin >> diameter;

    // process
    untaxedPrice = LABOR + RENT + MATERIAL_PER_INCH * diameter;
    HST = untaxedPrice * 0.13;
    totalCost = untaxedPrice + HST;

    // output
    std::cout << std::endl;
    std::cout << "The cost of a " << diameter <<
    " inch pizza is $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << totalCost << std::endl;

    std::cout << "\nDone." << std::endl;
}
