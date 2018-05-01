#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>

using namespace std;

class student
{
        private: string lastName;
                 string firstName;

        public: void setName (string, string);
                string fullName();

};
#endif
