#pragma once
#include <string>
#include "Image.h"

class Publication
{
private:
	std::string Name;
	int ISBN;
	std::string Author;
	std::string publicationDate;
	Image Cover;
public:
	std::string Owner;
};

