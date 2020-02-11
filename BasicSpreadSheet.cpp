// BasicSpreadSheet.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Programmer: Joseph Ciriello

#include <iostream>
#include "elements.h"

int main()
{
    bool running = true;
    bool valid;
    int menuChoice;
    while (running) {
        std::cout << "----- Welcome to Console Spreadsheets -----\n";
        std::cout << "-- Please type the number of the option ---\n";
        std::cout << "---- You would like to select and then ----\n";
        std::cout << "--------------- press ENTER ---------------\n" << std::endl;
        std::cout << "1. Create a new spreadsheet";
        std::cout << "2. Load a saved spreadsheet";
        std::cout << "3. Delete a save spreadsheet";
        std::cout << "4. Exit the program";
        do {
            std::cin >> menuChoice;
            if (menuChoice < 1 || menuChoice > 4) {
                valid = false;
                std::cout << "INVALID MENU CHOICE!";
            }
        } while (!valid);
    }
   
}
