// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Functions with parameters and what not

#include <iostream>
#include <string>
using namespace std;

void area(float length, float height) {
    // function to calculate area of triangle

    // defining variables
    float area;

    // process
    area = (length * height) / 2.0;

    // output
    std::cout << "The area of the triangle is " << area << " cm²" << std::endl;
}


int main() {
    // main function for function program

    // defining variables
    string temp;
    float length_input;
    float height_input;

    try {
        // input
        std::cout << "Enter the base length of a triangle (cm): " << std::endl;
        std::cin >> temp;
        length_input = stof(temp);

        std::cout << "Enter the height of a triangle (cm): " << std::endl;
        std::cin >> temp;
        height_input = stof(temp);

        // calling area function
        area(length_input, height_input);
    } catch (std::invalid_argument) {
        std::cout << "Please input a number" << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
