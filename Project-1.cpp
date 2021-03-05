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
        cout << "Please Pick The Text Color Following List: " << "\033[34m" << "Blue = 1 " << "\033[32m" << "Green = 2 " << "\033[36m" << "Aqua = 3 "  << "\033[0m" << endl;
        cin >> Color;

        string BGColor;
        cout << "Please Pick Your Background Color: " << "\033[34m" << "Blue = 1 " << "\033[32m" << "Green = 2 " << "\033[36m" << "Aqua = 3 " "\033[0m" << endl;
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
                
                else if (command == "diediedie")
                {
                SetConsoleTitle(TEXT("Just Give Up With Life"));
                    string die;
                    cout << "Do You Want To Die (y/n)";
                    cin >> die;

                    if (die == "y")
                    {
                        cout << "Heres Your Wish";
                        console = false;
                        running = false;
                    }

                    else
                    {
                        system("pause");
                        cout << "Press Any Key To Return To Menu";
                        reset = true;
                        system("CLS");
                    }
                } 

                else if (command == "operand")
                {
                    int a, b, x, y;

                    cout << "Value A:";
                    cin >> a;

                    cout << "\nValue B";
                    cin >> b;

                    cout << "\nValue X";
                    cin >> x;

                    y = a * x + b;
                    cout << "The Value Of A*X+B is " << y;

                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");

                }
                else if (command == "guitest")
                {
                    cout << "Sorry This Function Is Useless Because The Idiots Didnt Install The .NET Framework\n";

                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");

                }

                else if (command == "hjonk") // HJOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOK
                {
                    system("start chrome.exe https://cdn.discordapp.com/attachments/813243300626694195/814838411490885632/Goose.png https://www.youtube.com/watch?v=riJs7DlphEM");
                   
                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");
                }
                else if (command == "god") // It Just Works What You - The ChalkEaters: 
                //Watch this: our newest release
                //The legendary series you've missed for years
                //Comes back, get ready for some action
                //Got couple bugs in here, some broken scripts right there
                //The fans will fix it anyway so we don't care
                //They'll patch it through micro transactions
                //So enjoy your pretty nylon bag
                //Oh and boy, stop shitting on our swag
                //You're not getting any money back
                //You knew that was a one way wacky track
                //Just shut up and have your nylon bag
                //Coming up with it was real drag
                //All proceeds go strictly to Vault Tec
                //So you're NOT getting your money back
                //It just works, it just works
                //Little lies, stunning shows
                //People buy, money flows, it just works
                //It just works, it just works
                //Overpriced open worlds
                //Earnings rise, take my word
                //It just works
                //It just works
                //It just works
                //It just works
                //Our tech is cutting edge as far as I can tell
                //The creation engine's aging very well
                //We're not planning on doing anything about it
                //Skyrim's the limit, don't deny it
                //See this mountain ? You can buy it
                //In the dlc for the price of a real mountain
                //What's wrong with a train in place of your head?
                //Come on, believe me, you've seen nothing yet
                //The battle spaceship with the dragon animation
                //Will become a new sensation on the internet
                //Just shut up, give us your every dime
                //Buying an armored horse is not a crime
                //devs could eat the Shadowmere alive so
                //Buy Skyrim one more Todd damn time
                //It just works, it just works
                //Little lies, stunning shows
                //People buy, money flows, it just works
                //It just works, it just works
                //Overpriced open worlds
                //Earnings rise, take my word
                //It just works
                //It just works
                //It just works
                //We don't want your endless shit
                //It's just not the game we need
                //Sick of looting useless junk
                //Graphics making our eyes bleed
                //We don't want your endless shit
                //It's just not the game we need
                //Sick of looting useless junk
                //Graphics making our eyes bleed
                //Now listen up
                //Welcome to the place washed by Iliac waves
                //There's two and a half peasants with the same ugly face
                //You're not into small towns? Check out big-ass plains
                //50 times the size of Skyrim's, twice as many pointless caves
                //You see
                //We at Bethesda know exactly what you want
                //Hardcore gamers inspired us to improve shopping a lot
                //Now each lockpick must be bought for an actual ten spot
                //And saving now is a paid mod for just twenty a slot
                //You're never getting bored, you'll have infinite quests
                //There's every vagabond will put you to the test
                //You'll be richly awarded with infinite chests
                //Full of rusty swords and used pregnancy tests
                //We got rid of skill trees, they were oldand lame
                //Who needs a leveling system in a role playing game ?
                //You came to slash and kill and save one more nation
                //No more levels and skills, only degradation!
                //It just works, it just works
                //Little lies, stunning shows
                //People buy, money flows, it just works
                //It just works, it just works
                //Overpriced open worlds
                //Earnings rise, take my word
                //It just works
                //It just works, it just works
                //Little lies, stunning shows
                //People buy, money flows, it just works
                //It just works, it just works
                //Overpriced open worlds
                //Earnings rise, take my word
                //It just works
                //It just works
                //It just works
                //It just works
                //It just works
                //It just works
                //So, who's laughing now?
                {
                    system("start chrome.exe https://i.imgur.com/hguyOjZ.jpg https://www.youtube.com/watch?v=YPN0qhSyWy8");

                    cout << "Watch this: our newest release\nThe legendary series you've missed for years\nComes back, get ready for some action\nGot couple bugs in here, some broken scripts right there\nThe fans will fix it anyway so we don't care\nThey'll patch it through micro transactions\n\nSo enjoy your pretty nylon bag\nOh and boy, stop shitting on our swag\nYou're not getting any money back\nYou knew that was a one way wacky track\nJust shut up and have your nylon bag\nComing up with it was real drag\nAll proceeds go strictly to Vault Tec\nSo you're NOT getting your money back\n\nIt just works, it just works\nLittle lies, stunning shows\nPeople buy, money flows, it just works\nIt just works, it just works\nOverpriced open worlds\nEarnings rise, take my word\nIt just works\nIt just works\nIt just works\nIt just works\n\nOur tech is cutting edge as far as I can tell\nThe creation engine's aging very well\nWe're not planning on doing anything about it\nSkyrim's the limit, don't deny it\nSee this mountain ? You can buy it\nIn the dlc for the price of a real mountain\n\nWhat's wrong with a train in place of your head?\nCome on, believe me, you've seen nothing yet\nThe battle spaceship with the dragon animation\nWill become a new sensation on the internet\nJust shut up, give us your every dime\nBuying an armored horse is not a crime\nOur devs could eat the Shadowmere alive so\nBuy Skyrim one more Todd damn time\n\nIt just works, it just works\nLittle lies, stunning shows\nPeople buy, money flows, it just works\nIt just works, it just works\nOverpriced open worlds\nEarnings rise, take my word\nIt just works\nIt just works\nIt just works\n\nWe don't want your endless shit\nIt's just not the game we need\nSick of looting useless junk\nGraphics making our eyes bleed\nWe don't want your endless shit\nIt's just not the game we need\nSick of looting useless junk\nGraphics making our eyes bleed\n\nNow listen up\nWelcome to the place washed by Iliac waves\nThere's two and a half peasants with the same ugly face\nYou're not into small towns? Check out big-ass plains\n50 times the size of Skyrim's, twice as many pointless caves\n\nYou see\nWe at Bethesda know exactly what you want\nHardcore gamers inspired us to improve shopping a lot\nNow each lockpick must be bought for an actual ten spot\nAnd saving now is a paid mod for just twenty a slot\n\nYou're never getting bored, you'll have infinite quests\nThere's every vagabond will put you to the test\nYou'll be richly awarded with infinite chests\nFull of rusty swords and used pregnancy tests\n\nWe got rid of skill trees, they were oldand lame\nWho needs a leveling system in a role playing game ?\nYou came to slash and kill and save one more nation\nNo more levels and skills, only degradation!\n\nIt just works, it just works\nLittle lies, stunning shows\nPeople buy, money flows, it just works\nIt just works, it just works\nOverpriced open worlds\nEarnings rise, take my word\nIt just works\nIt just works, it just works\nLittle lies, stunning shows\nPeople buy, money flows, it just works\nIt just works, it just works\nOverpriced open worlds\nEarnings rise, take my word\nIt just works\nIt just works\nIt just works\nIt just works\nIt just works\nIt just works\n\nSo, who's laughing now?";
                    system("pause");
                    cout << "Press Any Key To Return To Menu";
                    reset = true;
                    system("CLS");
                }

                else if (command == "genius")
                {
                    system("start chrome.exe https://i.kym-cdn.com/entries/icons/facebook/000/032/704/clarkson.jpg");
                    cout << "The Creator Of This Was Scott TB\n";
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
            cout << "You Retard All You Had To Do Is Follow The Damn Train\n";
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
