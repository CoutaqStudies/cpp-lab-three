//
// Created by Michael on 07/11/2020.
//

#ifndef LABTHREECPP_EMPLOYEE_H
#define LABTHREECPP_EMPLOYEE_H

#include <string>

class Employee{
    public:
        virtual void printInfo() = 0;
        virtual ~Employee(){}
    protected:
        std::string firstName;
        std::string lastName;
        std::string gender;
        int yearOfBirth;
        int yearOfCareerStart;
        double rating;
        std::string phoneNumber;
};
#endif //LABTHREECPP_EMPLOYEE_H
