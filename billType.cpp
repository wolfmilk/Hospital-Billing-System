//billType.cpp
#include "billType.h"

billType::billType(int ID, double Med, double pDrF, double room_Charge)
{
    PtID = ID;
    MedChg = Med;
    DrF = pDrF;
    RmChg = room_Charge;
}

void billType::setMedChg(double Med)
{
    MedChg = Med;
}

double billType::getMedChg() const
{
    return MedChg;
}

void billType::setDrF(double pDrF)
{
    DrF = pDrF;
}

double billType::getDrF() const
{
    return DrF;
}

void billType::setRmChg(double pRmChg)
{
    RmChg = pRmChg;
}

double billType::getRmChg() const
{
    return RmChg;
}
