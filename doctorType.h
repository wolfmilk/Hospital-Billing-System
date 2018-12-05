#ifndef doctorType_H
#define doctorType_H
#include<iostream>
#include<string>
#include "personType.h"
using namespace std;

//inherits from personType class
class doctorType : public personType
{
    private :
    string Speciality;
public:
    
    // doctor class functions
    doctorType(string First = "", string Last = "", string Speciality = "");
    void setSpeciality(string Speciality) ;
    string getSpeciality() ;
};

#endif 
