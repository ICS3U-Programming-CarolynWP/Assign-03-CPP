// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/16
// Takes the user input for two coordinates
// And determines the quadrants of both
// As well as the distance between them.

#include <iostream>

int main() {
    // Variables for the coordinates
    std::string xCoordinate1;
    std::string xCoordinate2;
    std::string yCoordinate1;
    std::string yCoordinate2;
    int xCoord1Integer;
    int xCoord2Integer;
    int yCoord1Integer;
    int yCoord2Integer;
    // Variables for the distance between coordinates
    int distanceFromX;
    int distanceFromY;

    // Title of the program
    std::cout << "Coordinates\n";
    // Explanation on how coordinates are labeled
    std::cout << "The first coordinate pair will be labeled (x1,y1) \n";
    std::cout << "The second coordinate pair will be labeled (x2,y2) \n";

    // User input for both coordinates:
    // User input for the first coordinate
    std::cout << "Enter your first coordinate: \n";

    // x1 user input
    std::cout << "Enter x1: ";
    std::cin >> xCoordinate1;

    // y1 user input
    std::cout << "Enter y1: ";
    std::cin >> yCoordinate1;

    // User input for the second coordinate
    std::cout << "Enter your second coordinate: \n";

    // x2 user input
    std::cout << "Enter x1: ";
    std::cin >> xCoordinate2;

    // y2 user input
    std::cout << "Enter y2: ";
    std::cin >> yCoordinate2;

    // Try Catch statement to make sure all the user inputs are
    // Integers
    try {
        xCoord1Integer = std::stoi(xCoordinate1);
        xCoord2Integer = std::stoi(xCoordinate2);
        yCoord1Integer = std::stoi(yCoordinate1);
        yCoord2Integer = std::stoi(yCoordinate2);
    } catch (std::invalid_argument) {
        // Message that will be displayed if the user does not enter
        // An integer
        std::cout << "Please enter an integer!";
    }
    // If...ElseIf...Else statement for the quadrants (1st coordinate pair):
    // 1st Quadrant (If x and y are positive)
    if (xCoord1Integer > 0 && yCoord1Integer > 0) {
        std::cout << "Your first coordinate (" << xCoord1Integer <<
        "," << yCoord1Integer << ") Is in Quadrant 1 \n";

        // 2nd Quadrant (if x is negative and y is positive)
    } else if (xCoord1Integer < 0 && yCoord1Integer > 0) {
        std::cout << "Your first coordinate (" << xCoord1Integer <<
        "," << yCoord1Integer << ") Is in Quadrant 2 \n";

        // 3rd Quadrant (if x is negative and y is negative)
    } else if (xCoord1Integer < 0 && yCoord1Integer < 0) {
        std::cout << "Your first coordinate (" << xCoord1Integer <<
        "," << yCoord1Integer << ") Is in Quadrant 3 \n";

        // 4th Quadrant (if x is positive and y is negative) (Else statement)
    } else {
        std::cout << "Your first coordinate (" << xCoord1Integer <<
        "," << yCoord1Integer << ") Is in Quadrant 4 \n";
    }

    // If...ElseIf...Else statement for the quadrants (2nd coordinate pair):
    // 1st Quadrant (If x and y are positive)
    if (xCoord2Integer > 0 && yCoord2Integer > 0) {
        std::cout << "Your second coordinate (" << xCoordinate2 <<
        "," << yCoord2Integer << ") Is in Quadrant 1 \n";

        // 2nd Quadrant (if x is negative and y is positive)
    } else if (xCoord2Integer < 0 && yCoord2Integer > 0) {
        std::cout << "Your second coordinate (" << xCoord2Integer <<
        "," << yCoord2Integer << ") Is in Quadrant 2 \n";

        // 3rd Quadrant (if x is negative and y is negative)
    } else if (xCoord2Integer < 0 && yCoord2Integer < 0) {
        std::cout << "Your second coordinate (" << xCoord2Integer <<
        "," << yCoord2Integer << ") Is in Quadrant 3 \n";

        // 4th Quadrant (if x is positive and y is negative) (Else statement)
    } else {
        std::cout << "Your second coordinate (" << xCoord2Integer <<
        "," << yCoord2Integer << ") Is in Quadrant 4 \n";
    }

    // Function to calculate the distance from the first coordinate to the
    // second coordinate
    distanceFromX = xCoord1Integer - xCoord2Integer;
    distanceFromY = yCoord1Integer - yCoord2Integer;

    // Display the results from the distance calculation
    std::cout << "The first coordinate is " << distanceFromX <<
    " unit(s) and " << distanceFromY << " units(s) away \n";
    std::cout << "from your second coordinate \n";
}
