// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <iostream>
#include <list>


int averageGrade(std::list<int>passedInlistGrade) {
    // This function finds the average of a list of marks

    int total = 0;
    int length = passedInlistGrade.size();
    int average = 0;
    std::list<int>::iterator listItemItr;

    for (listItemItr = passedInlistGrade.begin();
        listItemItr != passedInlistGrade.end(); ++listItemItr) {
        total += (*listItemItr);
    }

    average = total / length;

    return average;
}


main() {
    // this function uses a list
    std::list <int> listGrade;
    std::string tempGradeString;
    int tempGrade;
    int average;

    // input
    std::cout << "Enter 1 mark at a time. Enter -1 to finish program";
    std::cout << std::endl;

    while (true) {
        try {
            std::cout << "What is your mark in percentage? : ";
            std::cin >> tempGradeString;
            tempGrade = std::stoi(tempGradeString);
            if (tempGrade <= 100 && tempGrade >= 0) {
                listGrade.push_back(tempGrade);
            } else if (tempGrade == -1) {
                average = averageGrade(listGrade);
                std::cout << "\nThe average is : " << average
                    << "%" << std::endl;
                break;
            } else {
                std::cout << "\nNegative number, please try again." <<
                std::endl;
                break;
            }
        } catch (std::invalid_argument) {
                std::cout << "\nInvalid input entered, please try again."
                    << std::endl;
                break;
        }
    } std::cout << "\nDone." << std::endl;
}
