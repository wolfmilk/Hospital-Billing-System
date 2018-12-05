//dateType.cpp
#include <iostream>
#include "dateType.h"

using namespace std;

void dateType::setDate(int Month, int Day, int Year)
{
    nMnth = Month;
    nDay = Day;
    nYr = Year;
}

int dateType::getDay() const
{
    return nDay;
}

int dateType::getMonth() const
{
    return nMnth;
}

int dateType::getYear() const
{
    return nYr;
}

void dateType::printDate() const
{
    cout << nMnth << "-" << nDay << "-" << nYr;
}

//Constructor with parameters
dateType::dateType(int Month, int Day, int Year)
{
    nMnth = Month;
    nDay = Day;
    nYr = Year;
}
