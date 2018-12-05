//billType.h
//#ifndef billType_H
#define billType_H
#include <iostream>
#include <string>

using namespace std;

class billType
{
    private :
    int PtID;
    double MedChg;
    double DrF;
    double RmChg;
    
public:
    billType(int PtID = 0, double MedChg = 0, double DrF = 0, double RmChg = 0);
    void setMedChg(double MedChg);
    double getMedChg() const;
    void setDrF(double DrF);
    double getDrF() const;
    void setRmChg(double RmChg);
    double getRmChg() const;
};

//#endif billType_H
