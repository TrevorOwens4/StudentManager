//Trevor Owens
#include "student.h"

// Function definitions

void student::setName(string fName,string lName)
{
        lastName = lName;
        firstName = fName;

}

string student::fullName()
{
        string fullName;

        fullName.append(firstName);
        fullName.append(" ");
        fullName.append(lastName);

        return fullName;
}





