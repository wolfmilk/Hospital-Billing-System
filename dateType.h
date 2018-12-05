//dateType.h
#ifndef dateType_H
#define dateType_H

class dateType
{
public:
    void setDate(int Month, int Day, int Year);
    
    int getDay() const;
    
    int getMonth() const;
    
    int getYear() const;
    
    void printDate() const;
    
    dateType(int Month = 1, int Day = 1, int Year = 1900);
    
private:
    int nMnth;
    int nDay;
    int nYr;
};

#endif
