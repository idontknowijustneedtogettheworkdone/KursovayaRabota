#include "Image.h"
#include <string>

Image::Image(std::string ImageURL) {
	this->ImageURL = ImageURL;
};

std::string Image::GetImage() {
	return this->ImageURL;
};

void Image::SetImage(std::string ImageURL) {
	this->ImageURL = ImageURL;
}