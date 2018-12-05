//patientType.h
#ifndef patientType_H
#define patientType_H
#include<iostream>
#include<string>
#include "personType.h"
#include "dateType.h"
#include "doctorType.h"

using namespace std;

class patientType :public personType
{
private:
    int PtID;
    int Age;
    dateType dtBth;
    dateType admtDt;
    dateType DcDt;
    doctorType Dr;
    
public:
    patientType(string First, string Last, int PtID, int Age, dateType dtBth, dateType admtDt, dateType DcDt, doctorType Dr);
    
    void setPtID(int ID);
    int getPtID();
    
    void setAge(int Age);
    int getAge();
    
    void setDoB(dateType DoB);
    dateType getDoB();
    
    void setAdmtDt(dateType AdmtDt);
    dateType getAdmtDt();
    
    void setDcDt(dateType DcDt);
    dateType getDcDt();
    
    void setPcNm(doctorType Dr);
    string getPcNm();
};

#endif 
//patientType_H
