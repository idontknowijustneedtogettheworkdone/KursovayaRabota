#pragma once
class Location
{
private:
	double x;
	double y;
public:
	Location(double _x, double _y);
	double findDistance(const Location& Loc1, const Location& Loc2);
};

