#include "Location.h"
#include <math.h>

Location::Location(double _x, double _y) {
	this->x = _x;
	this->y = _y;
}

double Location::findDistance(const Location& Loc1, const Location& Loc2){
	if (Loc1.x > Loc2.x) {
		if (Loc1.y > Loc2.y) {
			return sqrt(pow(Loc1.x - Loc2.x,2) + pow(Loc1.y - Loc2.y,2));
		} else {
			return sqrt(pow(Loc1.x - Loc2.x, 2) + pow(Loc2.y - Loc1.y, 2));
		}
	} else {
		if (Loc1.y > Loc2.y) {
			return sqrt(pow(Loc2.x - Loc1.x, 2) + pow(Loc1.y - Loc2.y, 2));
		}
		else {
			return sqrt(pow(Loc2.x - Loc1.x, 2) + pow(Loc2.y - Loc1.y, 2));
		}
	}
}