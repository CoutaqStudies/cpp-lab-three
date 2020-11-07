//
// Created by Michael on 07/11/2020.
//

#include <time.h>
#include <iostream>
#include "../Header Files/Designer.h"

Designer::Designer() {

}
Designer::Designer(std::string _firstName, std::string _lastName, std::string _gender, int _yearOfBirth,
                           int _yearOfCareerStart, double _rating, std::string _phoneNumber) {
    firstName = _firstName;
    lastName = _lastName;
    gender = _gender;
    yearOfBirth = _yearOfBirth;
    yearOfCareerStart = _yearOfCareerStart;
    rating = _rating;
    phoneNumber = _phoneNumber;
}

void Designer::process(const std::string &photo_path) {
    std::srand(time(0));
    printf("%s %s %s\n", "Image was produced by", firstName.c_str(), lastName.c_str());
    double newRating = double((rand() + 1)%10)/10;
    rating+=newRating;
}
void Designer::printInfo(){
    std::cout << firstName << " " << lastName << ", " << gender << ", " << rating <<"★, " << yearOfBirth << ", " << yearOfCareerStart<<std::endl;
}
double Designer::getRating(){
    return rating;
}


