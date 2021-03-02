// Project-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale>

using namespace std;

int main()
{

    string myName;
    cout << "Hello What Is Your Name: ";
    cin >> myName;

    cout << "*************\n";
    cout << "Hello " << myName ;
    cout << "\n*************\n";
    bool running = false;

    string command = "";
    std::cout << "Please Enter Your Command: ";
    std::cin >> command;

    if (command == "close")
    {
        running = false;
    }
    else if (command == "add")
    {
        int numberA = 0;
        int numberB = 0;

        try
        {
            std::cout << "\tWhat Is Your First Number: ";
            std::cin >> numberA;

            std::cout << "\tWhat Is Your Second Number: ";
            std::cin >> numberB;

            std::cout << "\tThe Sum Of Those 2 Numbers Is " << numberA + numberB;
        }
        catch (exception)
        {
            std::cout << "Test";
        }
    }
    else if (command == "tri")
    {
        int cornerA = 0;
        int cornerB = 0;
        int cornerC = 0;

        try
        {
            cout << "\tWhat Is The Base Of The Triangle: ";
            cin >> cornerA;

            cout << "\tWhat Is The Height Of The Triangle: ";
            cin >> cornerB;

            float result = (cornerA * cornerB) / 2;
            cout << "\tThe Area Of Triangle is = " << result << "sq.cm";

        }
        catch (exception)
        {
            std::cout << "Test";
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
