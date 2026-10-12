#pragma once
#include <string>

class Image
{
protected:
	std::string ImageURL;
	void SetImage(std::string ImageURL);
public:
	std::string GetImage();
	Image(std::string ImageURL);
};

