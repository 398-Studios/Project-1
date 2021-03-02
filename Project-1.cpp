// Project-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale>
#include <Windows.h>

#define mathPi 3.141

using namespace std;

int console()
{

    cout << "\t+-----------------------------------------+\n";
    cout << "\t|                                         |\n";
    cout << "\t|           YooConsole 0.0.1              |\n";
    cout << "\t|                                         |\n";
    cout << "\t+-----------------------------------------+\n";
    bool console = true;

    while (console == true)
    {
        SetConsoleTitle(TEXT("YooConsole 0.0.1"));
        bool reset = false;
        string command = "";
        std::cout << "Please Enter Your Command: ";
        std::cin >> command;

        if (command == "close")
        {
            console = false;
        }
        else if (command == "add")
        {
            SetConsoleTitle(TEXT("YooConsole Add Function"));
            int numberA = 0;
            int numberB = 0;

            try
            {
                std::cout << "\tWhat Is Your First Number: ";
                std::cin >> numberA;

                std::cout << "\tWhat Is Your Second Number: ";
                std::cin >> numberB;

                std::cout << "\tThe Sum Of Those 2 Numbers Is " << numberA + numberB << "\n\n";

                system("pause");
                cout << "Press Any Key To Return To Menu";
                reset = true;
                system("CLS");

            }
            catch (exception)
            {
                std::cout << "Test";
            }
        }
        else if (command == "pi")
        {
            SetConsoleTitle(TEXT("YooConsole Pi Function"));

        }

        else
        {
            cout << "Unknown Command";
        }

        if (!reset)
            cout << "\n";

        else
        {
            cout << "\t+-----------------------------------------+\n";
            cout << "\t|                                         |\n";
            cout << "\t|           YooConsole 0.0.1              |\n";
            cout << "\t|                                         |\n";
            cout << "\t+-----------------------------------------+\n";
        }

    }
    return 0;
}

int main()
{
    bool running = true;
    while (running == true)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTitle(TEXT("YooConsole Startup"));

        string Color;
        cout << "Please Pick The Text Color Following List: " << "\033[34m" << "Blue = 1 " << "\033[32m" << "Green = 2 " << "\033[36m" << "Aqua = 3 " << endl;
        cin >> Color;

        string BGColor;
        cout << "Please Pick Your Background Color: " << "\033[34m" << "Blue = 1 " << "\033[32m" << "Green = 2 " << "\033[36m" << "Aqua = 3 " << endl;
        cin >> BGColor;

        string cmd("Color ");
        cmd += BGColor;
        cmd += Color;

        system(cmd.c_str());

        system("cls");

        string myName;
        cout << "Hello What Is Your Name: ";
        cin >> myName;
    namesetup:
        string confirm;
        cout << "Is " << myName << " Your Name (y/n)";
        cin >> confirm;

        if (confirm == "y")
        {
            system("CLS");


            cout << "\t+-----------------------------------------+\n";
            cout << "\t|                                         |\n";
            cout << "\t|           YooConsole 0.0.1              |\n";
            cout << "\t|                                         |\n";
            cout << "\t+-----------------------------------------+\n";
            bool console = true;

            while (console == true)
            {
                SetConsoleTitle(TEXT("YooConsole 0.0.1"));
                bool reset = false;
                string command = "";
                std::cout << "Please Enter Your Command: ";
                getline(cin >> ws, command);

                if (command == "close")
                {
                    console = false;
                    running = false;
                }
                else if (command == "add")
                {
                    SetConsoleTitle(TEXT("YooConsole Add Function"));
                    int numberA = 0;
                    int numberB = 0;

                    try
                    {
                        std::cout << "\tWhat Is Your First Number: ";
                        std::cin >> numberA;

                        std::cout << "\tWhat Is Your Second Number: ";
                        std::cin >> numberB;

                        std::cout << "\tThe Sum Of Those 2 Numbers Is " << numberA + numberB << "\n\n";

                        system("pause");
                        cout << "Press Any Key To Return To Menu";
                        reset = true;
                        system("CLS");

                    }
                    catch (exception)
                    {
                        std::cout << "Test";
                    }
                }
                else if (command == "driver check")
                {
                    SetConsoleTitle(TEXT("YooConsole Driver Check"));
                    int age;

                    cout << "\nPlease Enter Your Age To See If You Are Eligble For A Drivers Licence: ";
                    cin >> age;

                    if (age >= 16)
                        cout << "\nHi " << myName << " You Are Older Than 16 You Can Drive\n\n";
                    else
                        cout << "\nHi " << myName << " You Are Younger Than 16 You Cannot Drive\n\n";

                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");
                }
                else if (command == "pi")
                {
                    SetConsoleTitle(TEXT("YooConsole Pi Function"));

                    string unit;
                    float radius = 0;
                    cout << "Target Units";
                    cin >> unit;

                    cout << "\nCircle Radius";
                    cin >> radius;

                    cout << "(pi(" << radius << unit << "*" << radius << unit << ") = " << ((mathPi * radius) * radius) << unit;
                    cout << "\n\n Area Of Circle Is " << ((mathPi) * (radius * radius)) << unit << "\n";

                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");

                }

                else if (command == "tri")
                {
                    SetConsoleTitle(TEXT("YooConsole Tri Function"));

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

                        system("pause");
                        cout << "Press Any Key To Return To Menu";
                        reset = true;
                        system("CLS");

                    }
                    catch (exception)
                    {
                        std::cout << "Something Went Wrong Please Return To Menu";
                        reset = true;
                        system("CLS");
                    }
                }
                else if (command == "isequal")
                {
                    SetConsoleTitle(TEXT("YooConsole Is Number Equal"));
                    int num = 0;
                    cout << "\t Please Put A Number That You Would Like To Find Out If It Is Equal Or Odd: ";
                    cin >> num;
                    
                    if (num % 2 == 0)
                    {
                        cout << "Number (" << num << ") Is Even" << "\n";
                    }
                    else
                    {
                        cout << "Number (" << num << ") Is Odd\n";
                    }

                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");

                }
                else if (command == "prime")
                {
                    SetConsoleTitle(TEXT("YooConsole Prime Checker"));
                    int num = 0;
                    cout << "Please Enter A Number Which You Would Like To Find The Prime Of: ";
                    cin >> num;

                    bool isPrime = true;

                    if (num == 0 || num == 1)
                    {
                        isPrime = false;
                    }
                    else
                    {
                        for (int i = 2; i <= num / 2; i++)
                        {
                            if (num % i == 0)
                            {
                                isPrime = false;
                            }
                        }
                    }

                    if (isPrime)
                    {
                        cout << "\nNumber (" << num << ") Is Prime\n";
                    }
                    else
                    {
                        cout << "\nNumber (" << num << ") Is Not Prime\n";
                    }

                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");
                }

                else
                {
                    cout << "Unknown Command";
                }

                if (!reset)
                    cout << "\n";

                else
                {
                    cout << "\t+-----------------------------------------+\n";
                    cout << "\t|                                         |\n";
                    cout << "\t|           YooConsole 0.0.1              |\n";
                    cout << "\t|                                         |\n";
                    cout << "\t+-----------------------------------------+\n";
                }
            }
        }
        else if (confirm == "n")
        {
            cout << "Please Enter Your Name: ";
            cin >> myName;
            system("CLS");
            goto namesetup;
        }
        else
        {
            cout << "Fuck You CJ All You Had To Do Is Follow The Damn Train\n";
            running = false;
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
