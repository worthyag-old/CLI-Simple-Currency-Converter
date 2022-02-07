//
// Created by Worthy on 30/01/2022.
//
#include <iostream>
using namespace std;

int initial;
int final;
// Fix rounding
float userEntry;

void menu();
void select(int from, int to);
int poundConverter(int to);
int dollarConverter(int to);
int euroConverter(int to);
bool on = true;


int main()
{
    while (on)
    {
        menu();
    }
    return 0;
}

void menu()
{
    std::cout << "Welcome to CURRENCY CONVERTER.\n";
    std::cout << "Pick the currency you want to convert from:\n";
    std::cout << "1. (£) Pounds\n";
    std::cout << "2. ($) US Dollars\n";
    std::cout << "3. (€) Euros\n";
    std::cout << "4. Exit\n";
    std::cin >> initial;

    if (initial != 4)
    {
        std::cout << "Pick the currency you want to convert to:\n";
        std::cout << "1. (£) Pounds\n";
        std::cout << "2. ($) US Dollars\n";
        std::cout << "3. (€) Euros\n";
        std::cin >> final;
        select(initial, final);
    }
    else
        on = false;
}

void select(int from, int to)
{
    if (from == 1)
        poundConverter(to);
    else if (from == 2)
        dollarConverter(to);
    else if (from == 3)
        euroConverter(to);
    else {
        std::cout << "Input incorrect\n";
        menu();
    }
}

int poundConverter(int to)
{
   if (to == 1)
   {
       std::cout << "Enter amount: \n";
       std::cin >> userEntry;
       std::cout << "£" << userEntry << " is £" << userEntry << std::endl;

   }
    else if (to == 2)
    {
        std::cout << "Enter amount: \n";
        std::cin >> userEntry;
        std::cout << "£" << userEntry << " is $" << (userEntry * 1.34) << std::endl;
    }
   else if (to == 3)
   {
       std::cout << "Enter amount: \n";
       std::cin >> userEntry;
       std::cout << "£" << userEntry << " is €" << (userEntry * 1.20) << std::endl;
   }
   else
   {
       std::cout << "Input incorrect\n";
       menu();
   }
   return 0;
}

int dollarConverter(int to)
{
    if (to == 1)
    {
        std::cout << "Enter amount: \n";
        std::cin >> userEntry;
        std::cout << "$" << userEntry << " is £" << (userEntry * 0.74628) << std::endl;

    }
    else if (to == 2)
    {
        std::cout << "Enter amount: \n";
        std::cin >> userEntry;
        std::cout << "$" << userEntry << " is $" << userEntry << std::endl;
    }
    else if (to == 3)
    {
        std::cout << "Enter amount: \n";
        std::cin >> userEntry;
        std::cout << "$" << userEntry << " is €" << (userEntry * 0.8973) << std::endl;
    }
    else
    {
        std::cout << "Input incorrect\n";
        menu();
    }
    return 0;
}

int euroConverter(int to)
{
    if (to == 1)
    {
        std::cout << "Enter amount: \n";
        std::cin >> userEntry;
        std::cout << "€" << userEntry << " is £" << (userEntry * 0.83187) << std::endl;

    }
    else if (to == 2)
    {
        std::cout << "Enter amount: \n";
        std::cin >> userEntry;
        std::cout << "€" << userEntry << " is $" << (userEntry * 1.11447) << std::endl;
    }
    else if (to == 3)
    {
        std::cout << "Enter amount: \n";
        std::cin >> userEntry;
        std::cout << "€" << userEntry << " is €" << userEntry << std::endl;
    }
    else
    {
        std::cout << "Input incorrect\n";
        menu();
    }
    return 0;
}

