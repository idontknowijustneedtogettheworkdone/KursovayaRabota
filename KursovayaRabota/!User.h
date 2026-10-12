#pragma once
#include <string>

class User
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
	User(std::string Name, std::string Surname, std::string ID, std::string Password, std::string Email, int phoneNumber);
};

