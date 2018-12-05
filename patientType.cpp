#include <iostream>
#include "patientType.h"

patientType::patientType(string First, string Last, int ID, int PtAge, dateType DoB, dateType pAdmtDt, dateType pDcDt, doctorType pDr)

{
    setName(First,Last);
    PtID = ID;
    Age = PtAge;
    dtBth = DoB;
    admtDt = pAdmtDt;
    DcDt = pDcDt;
    Dr = pDr;
}

void patientType::setPtID(int ID)
{
    PtID = ID;
}

void patientType::setAge(int pAge)
{
    Age = pAge;
}

void patientType::setDoB(dateType DoB)
{
    dtBth = DoB;
}

void patientType::setAdmtDt(dateType pAdmtDt)
{
    admtDt = pAdmtDt;
}

void patientType::setDcDt(dateType pDcDt)
{
    DcDt = pDcDt;
}

void patientType::setPcNm(doctorType pDr)
{
    Dr = pDr;
}

int patientType::getPtID()
{
    return PtID;
}

int patientType::getAge()
{
    return Age;
}

dateType patientType::getDoB()
{
    return dtBth;
}

dateType patientType::getAdmtDt()
{
    return admtDt;
}

dateType patientType::getDcDt()
    {
    return DcDt;
    }

string patientType::getPcNm()
{
    return Dr.getFirstName();
    return Dr.getLastName();
   
}
