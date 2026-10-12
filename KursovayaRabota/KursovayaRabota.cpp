// KursovayaRabota.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "!User.h"
#include "!Publication.h"
#include "Admin.h"
#include "Book.h"
#include "AdminControl.h"
#include "Image.h"
#include "Library.h"
#include "Location.h"
#include "Reader.h"
#include "SciencePublication.h"
#include <conio.h>

void registerReader()
{
    
}

void LogIn()
{

}

int main()
{
    bool WhileFlag = true;
    std::string password;
    while (WhileFlag) {
        char ch = getchar();
        switch (ch-'0') {
            case 1:
                std::cout << "Registered reader" << std::endl;
                WhileFlag = false;
                break;
            case 2: //Log in as reader
                std::cout << "Reader Password:";
                std::cin >> password;
                if (password == "12345678") {
                    std::cout << "Reader logged in" << std::endl;
                    WhileFlag = false;
                }
                else {
                    std::cout << "Wrong password." << std::endl;
                }
                break;
            case 3: //Log In As Admin
                std::cout << "Admin Password:";
                std::cin >> password;
                if (password == "123456789") {
                    std::cout << "Admin logged in" << std::endl;
                    WhileFlag = false;
                }
                else {
                    std::cout << "Wrong password" << std::endl;
                }
                break;
            case 4: //Exit
                std::cout << "Exitting the program" << std::endl;
                WhileFlag = false;
            default:
                break;
        }
    }
}

