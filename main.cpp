// The main function
#include<iostream>
#include "doctorType.h"
#include "patientType.h"
#include "dateType.h"
#include "billType.h"
using namespace std;
int main()
{
    // Declaration
    string First,Last,pFirst,pLast,Speciality;
    int day,month,year,aday,amonth,ayear,dday,dmonth,dyear,pID,pAge;
    double mcost,dfee,rcharge;
    // read&write the doctor's name and speciality
    cout<< "Enter The Doctor's First Name: ";
    cin>>First;
    cout<< "Enter The Doctor's Last Name: ";
    cin>>Last;
    cout<< "Enter The Doctor's Speciality: ";
    cin>>Speciality;
    //Read&write the patient ID, First, last name, bith date,admission date, discharge date and age
    cout<< "Enter The Patient's ID: ";
    cin>>pID;
    cout<< "Enter The Patient's First Name: ";
    cin>>pFirst;
    cout<< "Enter The Patient's Last Name: ";
    cin>>pLast;
    cout<< "Enter The Patient's Age: ";
    cin>>pAge;
    cout<< "Enter Patient's day of birth: ";
    cin>>day;
    cout<< "Enter Patient's Month of birth: ";
    cin>>month;
    cout<< "Enter Patient's Year of birth: ";
    cin>>year;
    cout<< "Enter Patient's day of Admission: ";
    cin>>aday;
    cout<< "Enter Patient's Month of Admission: ";
    cin>>amonth;
    cout<< "Enter Patient's Year of Admission: ";
    cin>>ayear;
    cout<< "Enter Patient's day of Discharhe: ";
    cin>>dday;
    cout<< "Enter Patient's Month of Discharhe: ";
    cin>>dmonth;
    cout<< "Enter Patient's Year of Discharhe: ";
    cin>>dyear;
    //Enter charges
    cout<< "Enter the Medicine's Cost: ";
    cin>>mcost;
    cout<< "Enter the Doctor's Fee: ";
    cin>>dfee;
    cout<< "Enter the Rom's Charge: ";
    cin>>rcharge;
    // dateType object for birth date, admission date and discharge date
    dateType dtBth(month,day,year);
    dateType admtDt(amonth,aday,ayear);
    dateType DcDt(dmonth,dday,dyear);
    //doctorType object and display doctor information
    doctorType doctor(First,Last,Speciality);
    cout << "\n Doctor Details " << endl;
    cout << "\n Doctor's Name: " << doctor.getFirstName() << " " << doctor.getLastName() << endl;
    cout << "\n Specialty: " << doctor.getSpeciality() << endl;
    //patientType object and display information
    patientType patient(pFirst,pLast,pID,pAge, dtBth, admtDt, DcDt, doctor);
    cout << "\n Patient Details" << endl;
    cout << "\n Patient Name: " << patient.getFirstName() << " " << patient.getLastName() << endl;
    cout << "\n Patient ID: " << patient.getPtID() << endl;
    cout << "\n Age: " << patient.getAge() << endl;
    cout << "\n Date Of Birth: ";
    //call function  patient.getDoB().printDate();
    patient.getDoB().printDate();
    cout << endl;
       // display a visit details
    cout << "\n Visit Details" << endl;
    cout << "\n Date of Admission: ";
    patient.getAdmtDt().printDate();
    cout << "\n Date of Discharge: ";
    patient.getDcDt().printDate();
    cout << "\n Doctor Name: "<< patient.getPcNm() << endl;
    billType patientBill(pID,mcost,dfee,rcharge);
    cout << "\n Billing Details" << endl;
    cout << "\n Medicine Cost: $" << patientBill.getMedChg() << endl;
    cout << "\n Doctor Fee: $" << patientBill.getDrF() << endl;
    cout << "\n Room Charges: $" << patientBill.getRmChg() << endl;
    cout << "\n Total pay: $" << patientBill.getMedChg() + patientBill.getDrF() + patientBill.getRmChg() << endl;
    system("pause");
    return 0;
}
