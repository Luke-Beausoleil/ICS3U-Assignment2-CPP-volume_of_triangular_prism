// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: April 2021
// This program calculates the volume of a triangular prism
//    with dimensions inputted by the user

#include <iostream>

int main() {
    // this function calculates the volume of a triangular prism

    // variables
    float height;
    float base;
    float length;
    float volume;

    // input
    std::cout << "Enter the height of the triangular face in mm: ";
    std::cin >> height;
    std::cout << "Enter the width of the base of the triangular face in mm: ";
    std::cin >> base;
    std::cout << "Enter the length of the rectangle face in mm: ";
    std::cin >> length;

    // process
    volume = (height * base * length) / 2;

    // output
    std::cout << "\nThe volume of the triangular prism with height: "
          << height << " mm, base: " << base << " mm, and length: "
          << length << " mm is: " << std::endl;
    std::cout << volume << " mm³" << std::endl;
    std::cout << "\nDone." << std::endl;
}
