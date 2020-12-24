// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program determines you grade middle percentage

#include <iostream>

int whichMark(std::string mark) {
    // This function determines you grade middle percentage

    int markPercent;

    if (mark == "4+") {
        markPercent = 97;
        return markPercent;
    } else if (mark == "4") {
        markPercent = 90;
        return markPercent;
    } else if (mark == "4-") {
        markPercent = 83;
        return markPercent;
    } else if (mark == "3+") {
        markPercent = 78;
        return markPercent;
    } else if (mark == "3") {
        markPercent = 75;
        return markPercent;
    } else if (mark == "3-") {
        markPercent = 71;
        return markPercent;
    } else if (mark == "2+") {
        markPercent = 68;
        return markPercent;
    } else if (mark == "2") {
        markPercent = 64;
        return markPercent;
    } else if (mark == "2-") {
        markPercent = 61;
        return markPercent;
    } else if (mark == "1+") {
        markPercent = 58;
        return markPercent;
    } else if (mark == "1") {
        markPercent = 54;
        return markPercent;
    } else if (mark == "1-") {
        markPercent = 51;
        return markPercent;
    } else if (mark == "R") {
        markPercent = 24;
        return markPercent;
    } else {
        markPercent =  -1;
        return markPercent;
    }
}


int main() {
    std::string mark;
    int markPercent;

    std::cout << "" << std::endl;
    std::cout << "Please enter a mark: ";
    std::cin >> mark;
    std::cout << "" << std::endl;

    markPercent = whichMark(mark);

    if (markPercent == -1) {
        std::cout << "-1" << std::endl;
    } else if (markPercent == 24) {
        std::cout << "You have a middle percentage mark of " <<
            markPercent << "% (You failed this class)" << std::endl;
    } else {
        std::cout << "You have a middle percentage mark of " <<
             markPercent << "%" << std::endl;
    }
}
