//
// Created by Michael on 07/11/2020.
//

#ifndef LABTHREECPP_DESIGNER_H
#define LABTHREECPP_DESIGNER_H


#include "Employee.h"
#include "IPictureProcessor.h"

class Designer: public Employee, public IPictureProcessor{
public:
    Designer();
    Designer(std::string firstName, std::string lastName, std::string gender, int yearOfBirth, int yearOfCareerStart, double rating, std::string phoneNumber);
    void printInfo() override;
    double getRating();
    virtual ~Designer(){}
    void process(const std::string &photo_path) override;
};


#endif //LABTHREECPP_DESIGNER_H
