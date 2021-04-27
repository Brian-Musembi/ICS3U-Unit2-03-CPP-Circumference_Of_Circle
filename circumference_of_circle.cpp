// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 27 April 2021
// This program calculates the circumference of a circle
// with user input


#include <iostream>

int main() {
// this function calculates circumference of a circle
const double TAU = 6.2831;
int radius;
double circumference;

// input
  std::cout << "Enter radius of the circle (mm): ";
  std::cin >> radius;

// process
  circumference = TAU*radius;

// output
  std::cout << "" << std::endl;
  std::cout << "Circumference is " << circumference << " mm" << std::endl;}
