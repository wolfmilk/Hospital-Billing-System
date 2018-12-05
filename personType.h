#ifndef personType_H
#define personType_H
#include <iostream>
#include <string>

using namespace std;

class personType
{
public:
    //Function to output the first name and last name
    //in the form firstName lastName.
    void print() const;
    
    //Function to set firstName and lastName according
    //to the parameters.
    //Postcondition: firstName = first; lastName = last
    void setName(string first, string last);
    
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.
    string getFirstName() const;
    
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.
    string getLastName() const;
    
    //Constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are null strings.
    //Postcondition: firstName = first; lastName = last
    personType(string first = "", string last = "");
    
private:
    string firstName;		//variable to store the first name
    string lastName;		//variable to store the last name
};
#endif
