//doctorType.cpp
#include "doctorType.h"

doctorType::doctorType(string First, string Last ,string Spec)
{
    setName(First,Last);
    Speciality = Spec;
}

void doctorType::setSpeciality(string Spec)
{
    Speciality = Spec;
}

string doctorType::getSpeciality()
{
    return Speciality;
}

