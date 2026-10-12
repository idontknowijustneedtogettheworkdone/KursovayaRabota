#include "!User.h"
#include <string>

User::User(std::string Name, std::string Surname, std::string ID, std::string Password, std::string Email, int phoneNumber) {
	this->Name = Name;
	this->Surname = Name;
	this->ID = ID;
	this->Password = Password;
	this->Email = Email;
	this->phoneNumber = phoneNumber;
}