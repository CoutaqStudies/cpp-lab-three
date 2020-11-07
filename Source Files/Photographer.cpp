//
// Created by Michael on 06.10.2020.
//
/*Класс ФОТОГРАФ.
Данные: имя, фамилия, пол, год рождения, год начала деятельности, рейтинг.
Создать 2 фотографов в куче и одного в стеке. Данные первых двух заполнить с
помощью сеттеров, а третий проинициализировать с помощью конструктора с
параметрами. В главной функции проимитировать три фотосессии и голосование
зрителей по их результатам (нарастить рейтинг каждого фотографа на случайное число
из диапазона 0.0..1.0; если количество проголосовавших людей меньше 10, то не
наращивать рейтинг). Вывести список фотографов в порядке убывания суммарного
рейтинга.*/
#include "../Header Files/Photographer.h"
#include <iostream>
#include <fstream>
#include <list>

Photographer::Photographer() {

}

Photographer::Photographer(std::string _firstName, std::string _lastName, std::string _gender, int _yearOfBirth,
                           int _yearOfCareerStart, double _rating, std::string _phoneNumber, int _totalPhotos) {
    firstName = _firstName;
    lastName = _lastName;
    gender = _gender;
    yearOfBirth = _yearOfBirth;
    yearOfCareerStart = _yearOfCareerStart;
    rating = _rating;
    phoneNumber = _phoneNumber;
    totalPhotos = _totalPhotos;
}

void Photographer::process(const std::string &photo_path) {
    printf("%s %s %s\n", "Photo was processed by", firstName.c_str(), lastName.c_str());
    totalPhotos++;
}
void Photographer::printInfo(){
    std::cout << firstName << " " << lastName << ", " << gender << ", " << rating <<"★, " << yearOfBirth << ", " << yearOfCareerStart<< ", total photos: "<<totalPhotos<<std::endl;
}

int Photographer::getTotalPhotos() {
    return totalPhotos;
}

