#pragma once
#include <string>
#include "!User.h"

class Admin : protected User
{
protected:
	std::string Name;
	std::string Surname;
	std::string ID;
	std::string Password;
public:
	std::string Email;
	int phoneNumber;
protected:
	Admin(std::string Name, std::string Surname, std::string ID, std::string Password, std::string Email, int phoneNumber) : User(Name, Surname, ID, Password, Email, phoneNumber) {};
};

